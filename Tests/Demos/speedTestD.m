nArray = 100:100:2000; %number of rays in each run
tPush = 4; %simulation time in picoseconds

%load in constants
path(path,'../../Source')
path(path,'../../eval/runTIme')
global cnst
cnst = initCnst; 
rmpath(pwd+"/" + '../../Source')
gcp %start parallel pool
psetOriginal = ["../../Source"]; %pathway for original algorithm
psetFinal = ["../../Source",'../../eval/runTIme/RectInterp']; %pathway for final algorithm

%running original algorithm
loadReqPaths(psetFinal)
data1 = speedTestComp("test1.mat",tPush,nArray,@pushBundleRect_mex);
unloadReqPaths(psetFinal)

%running final algorithm
loadReqPaths(psetFinal)
data2 = speedTestMult("test1.mat",tPush,nArray,@pushBundleRectMulti_mex);
unloadReqPaths(psetFinal)

%determining speeds
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