function times = speedTestComp(dataFile,tPush,nArray,func1)
    %run a ray trajectory calculation and record its time
    %for code that is compiled
    load(dataFile,"rayGd")
    rayGd = rmfield(rayGd,"DT"); 
    times = zeros([length(nArray),1]);
    for i = 1:length(nArray)
         disp(i)
         rayBundleB1 = rayInit(rayGd,nArray(i));
         tic
         rayBundleB1 = func1(rayBundleB1,rayGd,tPush);
         times(i,1) = toc;
    end
end