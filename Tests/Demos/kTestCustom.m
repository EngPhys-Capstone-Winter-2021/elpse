launchList.translate = 5.0e3;  

path(path,'../../Source')
path(path,'../../eval/runTIme')

global cnst
cnst = initCnst; 
rmpath(pwd+"/" + '../../Source')



nArray = 10;%
tRun = 15;

launchList.type = 'laserBeam';      % trigger for 'makeRayBundle'
launchList.mode = 'forward';        % Could be backward also (neg omega?).
launchList.nrays = nArray;
launchList.frequency = 40*cnst.omega0; % 1/sec
% center of spherical target
launchList.focalPt = [-400,0];      % microns
launchList.spot = struct('type','SG8','diameter',700); 
angle = 180+(-23.3); % (degres) is measured from "target norm"
launchList.centroid = [cosd(angle),sind(angle)]; % unit vector in
                                               % direction of
                                               % beam propagation
                                               % propagation

gcp

pset = ["../../Source",'../../eval/runTIme/RectInterp'];
times = [0];


loadReqPaths(pset)
tic
rb = kTestCustomPart1("test1.mat",tRun,nArray,@pushBundleRect,launchList);
times(2)=toc;
unloadReqPaths(pset)

path(path,'../../Source')
path(path,'../../eval')
path(path,'../../eval/runTIme/RectInterp')
load("test1","rayGd")
data = {rb};
mode = [0];

figure(1)
plotTrajs(rb.trajs);
%plotSpeeds(nArray,data,["Orig","Rect","Geometric Interp","Dopri 45"])