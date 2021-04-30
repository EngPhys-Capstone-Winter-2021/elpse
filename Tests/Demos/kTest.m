function rb = kTest(dataFile,tPush,nRays,func1)
    %used in wavevector magnitude difference tests
    %works on functions that are neither compiled or multicore
    load(dataFile,"rayGd")
    rb = rayInit(rayGd,nRays);
    rb = func1(rb,rayGd,tPush);
end