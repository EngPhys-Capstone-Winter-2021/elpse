 % 
 % Debugging the Raman routines
 %
 %   Edited: JFM 15/JUL/2020
 
 
 path(path,'./Plotting')
 path(path,'./Source')
 %path(path,'./Steven_dev')
 
 global cnst
 
 % some initialization
 cnst = initCnst;             % will put more things in initCnst...
 pltIncl = initDefaultPlots;  % default plots to make
 pltIncl.temperature = true;  %   modify to add the elecron temp
 
 
 % get the hydro profile
 %
 dracoFile = "draco_EPsph_JFM.mat";

 % set the time slice here
 %
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
 
 if ~exist('rayGd','var')
     disp("loading hydro...")
     rayGd = importDracoGrid(dracoFile,tslice,addVarFlag);   
     disp("done loading hydro")
 else
     disp("using exisiting hydro")
 end
 
 % update if the time slice has changed too
 if rayGd.iTime ~= tslice
     disp("updating hydro...")
     rayGd = importDracoGrid(dracoFile,tslice,addVarFlag);
     disp("done updating hydro")
 end

 
 %
 % initialize and create a launch list and ray bundle for an EM
 % wave - if one doesn't already exist
 %
 
 % At some point generalize makeRayBundle so that it can launch
 % EPWs (JFM)
 

 % Beam 1
 %
rayNums = 20:10:1000;
time1 = ones([1,length(20:10:100)]);
time2 = ones([1,length(20:10:100)]);
for rayInd = 1:length(rayNums)
    launchList.type = 'laserBeam';      % trigger for 'makeRayBundle'
    launchList.mode = 'forward';        % Could be backward also (neg omega?).
    launchList.nrays = rayNums(rayInd);
    launchList.frequency = cnst.omega0; % 1/sec
    % center of spherical target
    launchList.focalPt = [-400,0];      % microns
    launchList.spot = struct('type','SG8','diameter',700); 
    angle = 180+(-23.3); % (degres) is measured from "target norm"
    launchList.centroid = [cosd(angle),sind(angle)]; % unit vector in
                                                           % direction of
                                                           % beam propagation
                                                           % propagation
    launchList.translate = 5.0e3;   % distance in um from focus to
                                         % translate so that we are sure to
                                         % be far enough away to start
    % Create a ray bundle
    rayBundleB1 = makeRayBundle(launchList,rayGd);
    % give it a useful name
    rayBundleB1.name = 'Omega EP beam #1';






     %
     %  Integrate bundles
     %

     % incident laser light - Beam 1

     % First push
     %
     tPush = 3.7; % ps
     tic
     rayBundleB1 = pushBundleAlt(rayBundleB1,rayGd,tPush,[100 100 100 100]);
     time1(rayInd) = toc;
     disp(rayInd)
end

for rayInd = 1:length(rayNums)
    launchList.type = 'laserBeam';      % trigger for 'makeRayBundle'
    launchList.mode = 'forward';        % Could be backward also (neg omega?).
    launchList.nrays = rayNums(rayInd);
    launchList.frequency = cnst.omega0; % 1/sec
    % center of spherical target
    launchList.focalPt = [-400,0];      % microns
    launchList.spot = struct('type','SG8','diameter',700); 
    angle = 180+(-23.3); % (degres) is measured from "target norm"
    launchList.centroid = [cosd(angle),sind(angle)]; % unit vector in
                                                           % direction of
                                                           % beam propagation
                                                           % propagation
    launchList.translate = 5.0e3;   % distance in um from focus to
                                         % translate so that we are sure to
                                         % be far enough away to start
    % Create a ray bundle
    rayBundleB1 = makeRayBundle(launchList,rayGd);
    % give it a useful name
    rayBundleB1.name = 'Omega EP beam #1';






     %
     %  Integrate bundles
     %

     % incident laser light - Beam 1

     % First push
     %
     tPush = 3.7; % ps
     tic
     rayBundleB1 = pushBundle(rayBundleB1,rayGd,tPush,[100 100 100 100]);
     time2(rayInd) = toc;
     disp(rayInd)
end


plot(rayNums,time1,rayNums,time2)
title("Parallel Performance")
legend("6 Cores","Single-Core")
xlabel("Number of Rays")
ylabel("Seconds")


