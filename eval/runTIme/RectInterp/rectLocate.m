function [weights,inds] = rectLocate(qp,dim1_val,dim2_val)
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
    
    if qpSlope > diagSlope
        areaA = abs(vecB(1)*vecC(2)-vecB(2)*vecC(1))/2;
        areaB = abs(vecA(1)*vecC(2)-vecA(2)*vecC(1))/2;
        areaC = abs(vecA(1)*vecB(2)-vecA(2)*vecB(1))/2;
        areaD = 0;
    else
        areaA = 0;
        areaB = abs(vecC(1)*vecD(2)-vecC(2)*vecD(1))/2;
        areaC = abs(vecB(1)*vecD(2)-vecB(2)*vecD(1))/2;
        areaD = abs(vecB(1)*vecC(2)-vecB(2)*vecC(1))/2;
    end 
    
    inds = [ind1-1,ind2;ind1,ind2;ind1-1,ind2-1;ind1,ind2-1];
    weights = [areaA,areaB,areaC,areaD]/areaTri;
end

function ind = closest_val(A, val)
    %if ~exist('floorInd','var')
    floorInd = 1;
    %end
    %if ~exist('ceilInd','var')
    ceilInd = length(A);
    %end
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

