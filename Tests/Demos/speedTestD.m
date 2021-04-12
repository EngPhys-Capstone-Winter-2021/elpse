nArray = 100:100:10000;
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
data1 = speedTestComp("test1.mat",tPush,nArray,@pushBundleRect_mex);
unloadReqPaths(psetFinal)

loadReqPaths(psetFinal)
data2 = speedTestMult("test1.mat",tPush,nArray,@pushBundleRectMulti_mex);
unloadReqPaths(psetFinal)


data = [data1,data2];
legText = ["Rectangular Interp Comp","Rectangular Interp Comp Mult"];
plotSpeeds(nArray,data,legText)
title("Runtime of ODE Solvers")
rates = [0,0;0,0];
for i = 1:2
   rates(i,:) = polyfit(nArray,data(:,i),1)*1e3;
   disp(legText(i) + ":" + rates(i,1) +" ms/beam");
end
disp("Improvement by a factor of:" + rates(1,1)/rates(2,1))