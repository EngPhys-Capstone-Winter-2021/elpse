nArray = 100:100:1000;
tPush = 6;

path(path,'../../Source')
path(path,'../../eval/runTIme')
global cnst
cnst = initCnst; 
rmpath(pwd+"/" + '../../Source')
gcp
psetOriginal = ["../../Source"];
psetFinal = ["../../Source",'../../eval/runTIme/RectInterp'];

loadReqPaths(psetFinal)
data1 = speedTest("test1.mat",tPush,nArray,@pushBundleRect);
unloadReqPaths(psetFinal)

loadReqPaths(psetFinal)
data2 = speedTestComp("test1.mat",tPush,nArray,@pushBundleRect_mex);
unloadReqPaths(psetFinal)


data = [data1,data2];
legText = ["Rectangular Interp","Rectangular Interp Comp"];
plotSpeeds(nArray,data,legText)
title("Runtime of ODE Solvers")
for i = 1:2
   disp(polyfit(nArray,data(:,i),1)*1e3) 
end
rates = [0,0;0,0];
for i = 1:2
   rates(i,:) = polyfit(nArray,data(:,i),1)*1e3;
   disp(legText(i) + ":" + rates(i,1) +" ms/beam");
end
disp("Improvement by a factor of:" + rates(1,1)/rates(2,1))