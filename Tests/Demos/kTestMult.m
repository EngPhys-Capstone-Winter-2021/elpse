function rb = kTestMult(dataFile,tPush,nRays,func1)
    %used in wavevector magnitude difference tests
    %works on functions that are both compiled and multicore
    load(dataFile,"rayGd")
    rayGd = rmfield(rayGd,"DT");
    rb = rayInit(rayGd,nRays);
    rb = func1(rb,rayGd,tPush,initCnst);
end