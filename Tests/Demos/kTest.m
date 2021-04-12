
function rb = kTest(dataFile,tPush,nRays,func1)
    load(dataFile,"rayGd")
    rb = rayInit(rayGd,nRays);
    rb = func1(rb,rayGd,tPush);
end