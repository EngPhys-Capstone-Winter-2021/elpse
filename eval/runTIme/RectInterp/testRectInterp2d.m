load gridNe
addpath .. 
global cnst
 
 % some initialization
 cnst = initCnst;             % will put more things in initCnst...

 
 % get the hydro profile
 dracoFile = "../draco_EPsph_JFM.mat";

 % set the time slice here
 tslice = 11;                

 % variables to import/define set here:
 %
 addVarFlag.ne = true;
 addVarFlag.dLogNedz = true;
 addVarFlag.dLogNedr = true;
 addVarFlag.Dmn = false;
 addVarFlag.te = true;
 addVarFlag.ti = false;
 addVarFlag.dLnTedz = true;
 addVarFlag.dLnTedr = true;
 addVarFlag.Vz = true;
 addVarFlag.Vr = true;
 addVarFlag.Zbar = true;
 addVarFlag.Zsqr = true;
 
 % TO DO: add a function called "importAnalyticGrid()" that allows
 % you to define analytic hydro profiles, e.g. linearly varying
 % density, constant temperature and so on. Everything will still
 % be stored in the rayGd structure though.
 %
%rayGd = importDracoGrid(dracoFile,tslice,addVarFlag);
P_mat = rayGd.DT.Points;
T_mat = rayGd.DT.ConnectivityList;
n_vals = rayGd.valsNe;




zLow = min(uniqueZ);
zHigh = max(uniqueZ);
rLow = min(uniqueR);
rHigh = max(uniqueR);

numPoints = 10^6;%50000:50000:10^6;
times = zeros([4,length(numPoints)]);
for numInd = 1:length(numPoints)
    pointsList = rand(numPoints(numInd),2);
    pointsList(:,1) = (zHigh-zLow)*pointsList(:,1)+zLow;
    pointsList(:,2) = (rHigh-rLow)*pointsList(:,2) + rLow;


    tic
    interpData1 = interpDT(rayGd.DT,rayGd.valsNe,pointsList);
    times(1,numInd) = toc;

    tic
    interpData2 = interpRect(pointsList,uniqueZ,uniqueR,newV);
    times(2,numInd) = toc;

    tic 
    interpData3 = interpRectMex(pointsList,uniqueZ,uniqueR,newV);
    times(3,numInd) = toc;

    tic 
    interpData3 = loopRectInterp2d_mex(pointsList,uniqueZ,uniqueR,newV);
    times(4,numInd) = toc;
    disp(numInd)
    
    tic 
    interpData3 = builtInRectInterp(pointsList,uniqueZ,uniqueR,newV);
    times(5,numInd) = toc;
    disp(numInd)
end

function VqLin = interpDT(DT,ValsNe,PqList)
%DT - Delaunay Triangulation
%ValsNe - log density value at each given coordinate
%PqList - matrix with requested coordinates for interpolation: ordered
%[z,r]
    VqLin = zeros([size(PqList,1),1]);
    for i=1:size(PqList,1)
        [ti,bc] = pointLocation(DT,PqList(i,:));
        triVals = ValsNe(DT(ti,:));
        VqLin(i) = dot(bc',triVals')';
    end
end

function VqLin = interpRect(PqList,Z,R,V)
%DT - Delaunay Triangulation
%ValsNe - log density value at each given coordinate
%PqList - matrix with requested coordinates for interpolation: ordered
%[z,r]
    VqLin = zeros([size(PqList,1),1]);
    for i=1:size(PqList,1)
        VqLin(i) = rectInterp2d(PqList(i,:),Z,R,V);
    end     
end

function VqLin = interpRectMex(PqList,Z,R,V)
%DT - Delaunay Triangulation
%ValsNe - log density value at each given coordinate
%PqList - matrix with requested coordinates for interpolation: ordered
%[z,r]
    VqLin = zeros([size(PqList,1),1]);
    for i=1:size(PqList,1)
        VqLin(i) = rectInterp2d_mex(PqList(i,:),Z,R,V);
    end
end

