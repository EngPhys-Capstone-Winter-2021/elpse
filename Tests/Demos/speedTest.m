
function times = speedTest(dataFile,tPush,nArray,func1)
    %run a ray trajectory calculation and record its time
    load(dataFile,"rayGd")
    times = zeros([length(nArray),1]);
    for i = 1:length(nArray)
         rayBundleB1 = rayInit(rayGd,nArray(i));
         tic
         rayBundleB1 = func1(rayBundleB1,rayGd,tPush);
         times(i,1) = toc;
    end
end