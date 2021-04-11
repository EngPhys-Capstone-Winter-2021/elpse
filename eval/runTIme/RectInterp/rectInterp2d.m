function [ind1,ind2] = rectInterp2d(query,dim1_val,dim2_val)
    ind1 = closest_val(dim1_val,query(1));
    ind2 = closest_val(dim2_val,query(2));
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


