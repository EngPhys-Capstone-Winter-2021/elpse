nArray = 100;%
tRun = 5;

path(path,'../../Source')
path(path,'../../eval/runTIme')

global cnst
cnst = initCnst; 
rmpath(pwd+"/" + '../../Source')
gcp
psetOriginal = ["../../Source"];
psetFinal = ["../../Source",'../../eval/runTIme/RectInterp'];
times = [0,0];

loadReqPaths(psetOriginal)
tic
rb1 = kTest("test1.mat",tRun,nArray,@pushBundle);
times(1)=toc;
unloadReqPaths(psetOriginal)


loadReqPaths(psetFinal)
tic
rb2 = kTestMult("test1.mat",tRun,nArray,@pushBundleRectMulti_mex);
times(2)=toc;
unloadReqPaths(psetFinal)

path(path,'../../Source')
path(path,'../../eval')
path(path,'../../eval/runTIme/RectInterp')
load("test1","rayGd")
data = {rb1,rb2};
mode = [0,0];
kdiffDat = {rb1,rb2};
for dataInd = 1:length(data)
   preData = kCompare(data{dataInd},rayGd,mode(dataInd));
   [data{dataInd},kdiffDat{dataInd}] = kStat(preData,times(dataInd));
end
kPlot(data,["Original","Improved"]);
%plotSpeeds(nArray,data,["Orig","Rect","Geometric Interp","Dopri 45"])