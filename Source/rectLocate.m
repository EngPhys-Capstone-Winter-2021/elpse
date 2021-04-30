function [weights,inds] = rectLocate(qp,dim1_val,dim2_val)
    %determines the two indices of a rectangular grid that define the
    %rectangle enclosing the queried point and the weighting assigned to
    %the four points of the rectangle 
    %(J.S, R.F. April 2020)
    
    ind1 = closest_val(dim1_val,qp(1));
    ind2 = closest_val(dim2_val,qp(2));
    
    coordA = [dim1_val(ind1-1),dim2_val(ind2)];
    coordB = [dim1_val(ind1),dim2_val(ind2)];
    coordC = [dim1_val(ind1-1),dim2_val(ind2-1)];
    coordD = [dim1_val(ind1),dim2_val(ind2-1)];
    
    vecA = [coordA(1)-qp(1),coordA(2)-qp(2)];
    vecB = [coordB(1)-qp(1),coordB(2)-qp(2)];
    vecC = [coordC(1)-qp(1),coordC(2)-qp(2)];
    vecD = [coordD(1)-qp(1),coordD(2)-qp(2)];  

    
    diagSlope = (coordB(2)-coordC(2))/(coordB(1)-coordC(1));
    qpSlope = vecC(2)/vecC(1);
    areaTri = (coordD(1)-coordC(1))*(coordA(2)-coordC(2))/2;

     
   if qpSlope > diagSlope %triangle above diagonal
        weights = baryCent(qp,coordA,coordB,coordC);
        areaA = weights(1);%polyarea([qp(1),coordB(1),coordC(1)],[qp(2),coordB(2),coordC(2)]);%abs(vecB(1)*vecC(2)-vecB(2)*vecC(1))/2;
        areaB = weights(2);%polyarea([qp(1),coordA(1),coordC(1)],[qp(2),coordA(2),coordC(2)]);%abs(vecA(1)*vecC(2)-vecA(2)*vecC(1))/2;
        areaC = weights(3);%polyarea([qp(1),coordA(1),coordB(1)],[qp(2),coordA(2),coordB(2)]);%abs(vecA(1)*vecB(2)-vecA(2)*vecB(1))/2;
        areaD = 0;
        
   else %triangle below diagonal
        weights = baryCent(qp,coordB,coordC,coordD);
        areaA = 0;
        areaB = weights(1);%polyarea([qp(1),coordC(1),coordD(1)],[qp(2),coordC(2),coordD(2)]);%abs(vecC(1)*vecD(2)-vecC(2)*vecD(1))/2;
        areaC = weights(2);%polyarea([qp(1),coordB(1),coordD(1)],[qp(2),coordB(2),coordD(2)]);%abs(vecB(1)*vecD(2)-vecB(2)*vecD(1))/2;
        areaD = weights(3);%polyarea([qp(1),coordB(1),coordC(1)],[qp(2),coordB(2),coordC(2)]);%abs(vecB(1)*vecC(2)-vecB(2)*vecC(1))/2;
    end 
    
    inds = [ind1-1,ind2;ind1,ind2;ind1-1,ind2-1;ind1,ind2-1];
    weights = [areaA,areaB,areaC,areaD];%/areaTri;
end


function vals = baryCent(p,a,b,c)
    %algorithm that can determine the barycentric weights of point p 
    %based on a triangle defined by points a,b,c
    v0 = b - a;
    v1 = c - a;
    v2 = p' - a;
    %total triangle area
    den = v0(1) * v1(2) - v1(1) * v0(2);
    %individual area of subtriangles
    v = (v2(1) * v1(2) - v1(1) * v2(2)) / den;
    w = (v0(1) * v2(2) - v2(1) * v0(2)) / den;
    %final coordinate calculated by subtraction as u + v + w = 1
    u = 1.0 - v - w;
    vals = [v,w,u];
end

function ind = closest_val(A, val)
    %determines the lowest indice in an ordered list satisfying:
    %val < A(ind)
    floorInd = 1;
    ceilInd = length(A);

    while ceilInd - floorInd > 1
        med = floor((floorInd + ceilInd)/2);
        if A(med) >= val 
            ceilInd = med;
        else
            floorInd = med;
        end
    end

    if ceilInd - floorInd == 1 && (A(floorInd) <= val && A(ceilInd) > val)
        ind = ceilInd;
    else
        ind = 0;
    end  
end