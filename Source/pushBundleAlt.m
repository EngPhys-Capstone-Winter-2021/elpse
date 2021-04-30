
function bundleOut = pushBundleAlt(rayBundle,rayGd,tStep,margin,npts)
% 
% First cut at developing a ray integrator for EM and other waves:
% (JFM May 28, 2020)
%
% Perhaps trajIsNew should be replaced with pushFromBoundary? This
%  might help with the problems associated with integrating 
%  trajectories that could potentially leave the domain, and
%  where we currently have problems with "margin" (JFM 21 July, 2020).
%
 
 global cnst
 
 
 if ~exist('cnst','var')
     cnst = initCnst;              % will put more things in initCnst...
 end

 if ~exist('margin','var')
     margin = [150 150 150 150];   % margin around domain in microns
 end

 if ~exist('npts','var')
     npts = 2000;                  % points to use in str line check
 end
 
 if ~isfield(rayBundle,"rayICs")
     rayIC = zeros([2,rayBundle.nrays]);
     for rayInd = 1:rayBundle.nrays
         ICs = rayBundle.trajs{rayInd}(1,2:3);
         rayIC(:,rayInd) = ICs';
     end
     rayBundle.rayICs = rayIC;
 end
 if ~isfield(rayBundle,"direction")
    rayBundle.direction = rayBundle.trajs{1}(1,4:5)/sqrt(sum(rayBundle.trajs{1}(1,4:5).^2));
 end

 %
 % Integrate all the rays in the bundle one at a time
 %
 
 rayGd = rmfield(rayGd,"DT"); %Remove DT for compiled algorithm compatibility
 bundleOut = propAlg_mex(rayBundle,rayGd,tStep,margin,npts,initCnst);
end 


 