function ind = closest_value(A, val)
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