nArray = 100:100:2000;
path(path,'../../Source')
path(path,'RectInterp')
global cnst
cnst = initCnst; 
rmpath(pwd+"/" + '../../Source')

pset1 = ["../../Source"];
pset2 = ["../../Source","RectInterp"];
pset3 = ["ElpseGeometricInterpolator/Source","ElpseGeometricInterpolator/Analytics/Matmol/methods/ODE_solvers/geometric integrators"];
pset4 = ["../../Source","Dopri45"];
pset5 = ["../../Source","Dopri45","RectInterp"];
pset6 = ["../../Source","RectInterp"];
pset7 = ["../../Source","RectInterp"];
loadReqPaths(pset1)
data1 = speedTest("test1.mat",3.7,nArray,@pushBundle);
unloadReqPaths(pset1)
loadReqPaths(pset2)
data2 = speedTest("test1.mat",3.7,nArray,@pushBundleRect);
unloadReqPaths(pset2)
loadReqPaths(pset3)
data3 = speedTest("test1.mat",3.7,nArray,@pushBundle);
unloadReqPaths(pset3)
loadReqPaths(pset4)
data4 = speedTest("test1.mat",3.7,nArray,@pushBundle_DOPRI45);
unloadReqPaths(pset4)
loadReqPaths(pset5) 
data5 = speedTest("test1.mat",3.7,nArray,@pushBundle_DOPRIRECT);
unloadReqPaths(pset5)
loadReqPaths(pset6)
data6 = speedTestComp("test1.mat",3.7,nArray,@pushBundleRect_mex);
unloadReqPaths(pset6) 
loadReqPaths(pset7)
data7 = speedTestMult("test1.mat",3.7,nArray,@pushBundleRectMulti);
unloadReqPaths(pset7) 
loadReqPaths(pset7)
data8 = speedTestMult("test1.mat",3.7,nArray,@pushBundleRectMulti_mex);
unloadReqPaths(pset7) 

%data = [data5,data6];
data = [data1,data2,data3,data4,data5,data6,data7,data8];
%legText = ["DoPri 45 Rect","DoPri45 RECT Comp"];
legText = ["Original","Rect. Interp","Geometric","DoPri 45","DoPri45 RECT","comp","rect cmp","rect_multi","rect multi mex"];
plotSpeeds(nArray,data,legText)
title("Runtime of ODE Solvers")
for i = 1:8
   disp(polyfit(nArray,data(:,i),1)*1e3) 
end