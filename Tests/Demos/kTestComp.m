function rb = kTestComp(dataFile,tPush,nRays,func1)
    load(dataFile,"rayGd")
    rayGd = rmfield(rayGd,"DT");
    rb = rayInit(rayGd,nRays);
    rb = func1(rb,rayGd,tPush);
end