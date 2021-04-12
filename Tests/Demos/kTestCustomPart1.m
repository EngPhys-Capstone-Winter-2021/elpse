
function rb = kTestCustomPart1(dataFile,tPush,nRays,func1,llist)
    load(dataFile,"rayGd")
    rb = rayInitCustom(rayGd,nRays,llist);
    rb = func1(rb,rayGd,tPush);
end