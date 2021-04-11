nArray = 100:100:1000;
path(path,'../../Source')
path(path,'RectInterp')
global cnst
cnst = initCnst; 
rmpath(pwd+"/" + '../../Source')


pset2 = ["../../Source","RectInterp"];
loadReqPaths(pset2)

data2 = speedTest("test1.mat",3.7,nArray,@pushBundleRectMulti);
unloadReqPaths(pset2)


%data = [data5,data6];
%data = [data1,data2,data3,data4,data5,data6];
%legText = ["DoPri 45 Rect","DoPri45 RECT Comp"];
%legText = ["Original","Rect. Interp","Geometric","DoPri 45","DoPri45 RECT","comp"];
%plotSpeeds(nArray,data,legText)
%title("Runtime of ODE Solvers")
%for i = 1:6
%   disp(polyfit(nArray,data(:,i),1)*1e3) 
%end