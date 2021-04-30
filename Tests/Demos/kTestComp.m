function rb = kTestComp(dataFile,tPush,nRays,func1)
    %used in wavevector magnitude difference tests
    %works on functions that are compiled (no multicore)
    load(dataFile,"rayGd")
    rayGd = rmfield(rayGd,"DT");
    rb = rayInit(rayGd,nRays);
    rb = func1(rb,rayGd,tPush);
end