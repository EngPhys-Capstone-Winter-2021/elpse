nRays = 100;
path(path,'../../Source')
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

times = [0,0,0,0,0,0,0];
loadReqPaths(pset1)
tic
data1 = kTest("test1.mat",3.7,nRays,@pushBundle);
times(1) = toc;
unloadReqPaths(pset1)

loadReqPaths(pset2)
tic
data2 = kTest("test1.mat",3.7,nRays,@pushBundleRect);
times(2) = toc;
unloadReqPaths(pset2)

loadReqPaths(pset3)
tic
data3 = kTest("test1.mat",3.7,nRays,@pushBundle);
times(3) = toc;
unloadReqPaths(pset3)

loadReqPaths(pset4)
tic
data4 = kTest("test1.mat",3.7,nRays,@pushBundle_DOPRI45);
times(4) = toc;
unloadReqPaths(pset4)

loadReqPaths(pset5)
tic
data5 = kTest("test1.mat",3.7,nRays,@pushBundle_DOPRIRECT);
times(5) = toc;
unloadReqPaths(pset5)

loadReqPaths(pset6)
tic
data6 = kTestComp("test1.mat",3.7,nRays,@pushBundleRect_mex);
times(6) = toc;
unloadReqPaths(pset6)

loadReqPaths(pset7)
tic
data7 = kTest("test1.mat",3.7,nRays,@pushBundleComb);
times(6) = toc;
unloadReqPaths(pset7)



path(path,"..")
path(path,'../../Source')
load("test1","rayGd")
data = {data1,data2,data3,data4,data5,data6,data7};
kdiffDat = {data1,data2,data3,data4,data5,data6,data7};
for dataInd = 1:length(data)
   preData = kCompare(data{dataInd},rayGd);
   [data{dataInd},kdiffDat{dataInd}] = kStat(preData,times(dataInd));
end
%plotSpeeds(nArray,data,["Orig","Rect","Geometric Interp","Dopri 45"])