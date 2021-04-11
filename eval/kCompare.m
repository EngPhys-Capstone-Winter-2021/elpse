function kDiff = kCompare(bundle,rayGd)
    
    global cnst
    cnst = initCnst;
    
    freqs = bundle.frequency;
    trajs = bundle.trajs;
    ncVals = bundle.nc;
    kDiff = cell(bundle.nrays,1);
    
    
    for rayInd = 1:length(trajs)
        omega = freqs(rayInd);
        ncVal = ncVals(rayInd);
        t = trajs{rayInd}(:,1);
        k2 = trajs{rayInd}(:,4).^2 + trajs{rayInd}(:,5).^2;
        k=sqrt(k2);

        coords = trajs{rayInd}(:,2:3);
        kDiffRay = zeros([length(coords),1]);
        for ind = 1:length(coords)
            kVac = 1.e-6*abs(omega)/cnst.c;
            [ti,bc] = pointLocation(rayGd.DT,coords(ind,:)); 
            triValNe = rayGd.valsNe(rayGd.DT(ti,:));
            logNe = dot(bc',triValNe')';
            ne = 10^(logNe);
            kCalc = kVac*sqrt(1-ne/ncVal);
            kDiffRay(ind) = abs(kCalc - k(ind));  
        end
        kDiff{rayInd} = kDiffRay;
    end
end