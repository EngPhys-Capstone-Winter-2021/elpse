
 function rayGd = DracoMeshGrid(rayGd)
    %convert triangular meshes into rectangular grids to use rectangular
    %interpolation on
    % (J.S. April 2020)
    uniqueZ = sort(unique(rayGd.DT.Points(:,1)));
    rayGd.zVal = uniqueZ;
    uniqueR = sort(unique(rayGd.DT.Points(:,2)));
    rayGd.rVal = uniqueR;
    
    rayGd.gridNe = createRectGrid(uniqueZ,uniqueR,rayGd.DT.Points,rayGd.valsNe);
    rayGd.gridDLogNedz = createRectGrid(uniqueZ,uniqueR,rayGd.DT.Points,rayGd.valsDLogNedz);
    rayGd.gridDLogNedr = createRectGrid(uniqueZ,uniqueR,rayGd.DT.Points,rayGd.valsDLogNedr);
    
    rayGd.gridTe = createRectGrid(uniqueZ,uniqueR,rayGd.DT.Points,rayGd.valsTe);
    rayGd.gridDLnTedr = createRectGrid(uniqueZ,uniqueR,rayGd.DT.Points,rayGd.valsDLnTedr);
    rayGd.gridDLnTedz = createRectGrid(uniqueZ,uniqueR,rayGd.DT.Points,rayGd.valsDLnTedz);
 end  

                                    
 function gd = createRectGrid(valAxis1,valAxis2,P_mat,V_mat)
    gd = zeros([length(valAxis1),length(valAxis2)]);
    for index = 1:length(P_mat)
        xVal = P_mat(index,1);
        yVal = P_mat(index,2);
       for xInd = 1:length(valAxis1)
           if xVal == valAxis1(xInd)
               for yInd = 1:length(valAxis2)
                    if yVal == valAxis2(yInd)
                        gd(xInd,yInd) = V_mat(index);
                    end
               end
           end
       end
    end
end
