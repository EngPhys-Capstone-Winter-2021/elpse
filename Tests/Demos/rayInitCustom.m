function rayBundle = rayInit(rayGd,beamNumber,launchList)

  global cnst
 % some initialization
 cnst = initCnst;             % will put more things in initCnst...

 
 


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
 
     
 % distance in um from focus to
                                     % translate so that we are sure to
                                     % be far enough away to start
     % Create a ray bundle
     rayBundle = makeRayBundle(launchList,rayGd);
end