
function rb = kTestCustomPart1(dataFile,tPush,nRays,func1,llist)
    load(dataFile,"rayGd")
    rayGd = rmfield(rayGd,"DT");
    rb = rayInitCustom(rayGd,nRays,llist);
    rb = func1(rb,rayGd,tPush,initCnst);
end