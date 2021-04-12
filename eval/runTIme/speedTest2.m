nArray = 100;%:100:1000;
path(path,'../../Source')
path(path,'RectInterp')
global cnst
cnst = initCnst; 
rmpath(pwd+"/" + '../../Source')
gcp
pset1 = ["../../Source"];
pset2 = ["../../Source","RectInterp"];
pset3 = ["../../Source","RectInterp"];
pset4 = ["../../Source","RectInterp"];

loadReqPaths(pset1)
data1 = speedTest("test1.mat",3.7,nArray,@pushBundle);
unloadReqPaths(pset1)

loadReqPaths(pset2)
data2 = speedTest("test1.mat",3.7,nArray,@pushBundleRect);
unloadReqPaths(pset2)

loadReqPaths(pset3)
data3 = speedTestMult("test1.mat",3.7,nArray,@pushBundleRectMulti);
unloadReqPaths(pset3)

loadReqPaths(pset4)
data4 = speedTestMult("test1.mat",3.7,nArray,@pushBundleRectMulti_mex);
unloadReqPaths(pset4)


data = [data1,data2,data3,data4];
%data = [data1,data2,data3,data4,data5,data6];
%legText = ["DoPri 45 Rect",FDoPri45 RECT Comp"];
%legText = ["Original","Rect. Interp","Geometric","DoPri 45","DoPri45 RECT","comp"];
legText = ["norm","rect","mult","comp"];
plotSpeeds(nArray,data,legText)
title("Runtime of ODE Solvers")
for i = 1:4
   disp(polyfit(nArray,data(:,i),1)*1e3) 
end