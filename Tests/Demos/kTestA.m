nArray = 100; %number of rays
tRun = 4; %simulation time in picoseconds

%load in required constants
path(path,'../../Source')
path(path,'../../eval/runTIme')
global cnst
cnst = initCnst; 
rmpath(pwd+"/" + '../../Source')

gcp %start parallel pool
psetOriginal = ["../../Source"];
psetFinal = ["../../Source",'../../eval/runTIme/RectInterp' ];
times = [0,0];

%acquire a set of data for an algorithm, original
loadReqPaths(psetOriginal)
tic
rb1 = kTest("test1.mat",tRun,nArray,@pushBundle);
times(1)=toc;
unloadReqPaths(psetOriginal)

%acquire a set of data for an algorithm, final
loadReqPaths(psetFinal)
tic
rb2 = kTestMult("test1.mat",tRun,nArray,@pushBundleRectMulti_mex);
times(2)=toc;
unloadReqPaths(psetFinal)

%load in relevant paths for required functions
path(path,'../../Source')
path(path,'../../eval')
path(path,'../../eval/runTIme/RectInterp')
load("test1","rayGd")
data = {rb1,rb2};
mode = [0,0];
kdiffDat = {rb1,rb2};
for dataInd = 1:length(data)
    %wavevector difference analysis
   preData = kCompare(data{dataInd},rayGd,mode(dataInd));
   [data{dataInd},kdiffDat{dataInd}] = kStat(preData,times(dataInd));
end
kPlot(data,["Original","Improved"]);
