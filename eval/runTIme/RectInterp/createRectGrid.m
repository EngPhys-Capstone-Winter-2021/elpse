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