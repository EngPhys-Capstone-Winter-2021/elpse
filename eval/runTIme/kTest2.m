nArray = 100;%:100:1000;
tRun = 3.7;
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
times = [0,0,0,0];
loadReqPaths(pset1)
tic
data1 = kTest("test1.mat",tRun,nArray,@pushBundle);
times(1)=toc;
unloadReqPaths(pset1)

loadReqPaths(pset2)
tic
data2 = kTest("test1.mat",tRun,nArray,@pushBundleRect);
times(2)=toc;
unloadReqPaths(pset2)


loadReqPaths(pset3)
tic
data3 = kTestMult("test1.mat",tRun,nArray,@pushBundleRectMulti);
times(3)=toc;
unloadReqPaths(pset3)

loadReqPaths(pset4)
tic
data4 = kTestMult("test1.mat",tRun,nArray,@pushBundleRectMulti_mex);
times(4)=toc;
unloadReqPaths(pset4)

path(path,"..")
path(path,'../../Source')
path(path,'RectInterp')
load("test1","rayGd")
data = {data1,data1,data4,data4};
mode = [0,1,0,1];
kdiffDat = {data1,data1,data4,data4};
for dataInd = 1:length(data)
   preData = kCompare(data{dataInd},rayGd,mode(dataInd));
   [data{dataInd},kdiffDat{dataInd}] = kStat(preData,times(dataInd));
end
%plotSpeeds(nArray,data,["Orig","Rect","Geometric Interp","Dopri 45"])