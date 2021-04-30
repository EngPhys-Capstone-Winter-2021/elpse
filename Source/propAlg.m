function rayBundle = propAlg(rayBundle,rayGd,tStep,margin,npts,cnst)
     c=cnst.c;
     clum  = (c)*(1.e-6);  % speed of light in microns/ps
     ln10  = cnst.ln10;
     twopi = cnst.twopi;
     wpeConst = cnst.wpe;
     vTe1eV = cnst.vTe1eV;
     cnstVar = [c,clum,ln10,twopi,wpeConst,vTe1eV];

     rayBundle_nrays = rayBundle.nrays;
     rayBundle_halt = rayBundle.halt;
     rayBundle_trajs = rayBundle.trajs;
     rayBundle_type = rayBundle.type;
     rayBundle_rayICs = rayBundle.rayICs;
     rayBundle_frequency = rayBundle.frequency;
     if rayBundle.type == "EM"
        rayBundle_nc = rayBundle.nc;
     else
        rayBundle_nc = 0; %for EPW
     end
     rayBundle_direction = rayBundle.direction;
     
     
     for rayIdx = 1:rayBundle_nrays

         % check to see if we need to move this ray
         if rayBundle_halt(rayIdx)
             continue  % skip to next ray (iteration of loop)
         end

         trajIsNew = isempty(rayBundle.trajs{rayIdx}); 
         waveType = rayBundle_type;

         if trajIsNew    % need IC's for trajectory
             if waveType == 'EM'
                 x0 = rayBundle_rayICs(:,rayIdx)';  % position x0 is row vector here
                 % modify arguments to "toDispSurface()" to only what is
                 % needed
                 %
                 k0 = toDispSurface(x0,rayBundle_nc,rayIdx,rayGd,rayBundle_frequency,rayBundle_direction,cnstVar);         
                 tPrev = 0;                         % start from t=0
             else
                 error('Currently new trajectories are for EM waves only')
             end         
         else
             lastInfo = rayBundle_trajs{rayIdx}(end,:); % use the last time info
             x0 = lastInfo(2:3);   % position row vector
             k0 = lastInfo(4:5);   % wave vector row vector
             tPrev = lastInfo(1);
         end

         % TO DO: deal with the case where rayBundle.frequency is a row vector
         %
         omega_ps = 1.e-12*rayBundle_frequency(rayIdx);
         dirn = sign(omega_ps);             % see which direction we're going
         tStop = tPrev+tStep;
         tSpan = [tPrev, tStop];     
         ray0 = [x0, k0]';                  % initial condition (column vector)
                                            % in phase space for ode integrator

    % $$$      % Check to see if we could fall outside of the interpolation
    % $$$      % domain...
    % $$$      % need to pass the wave type to odeStrLine (i.e., for EPW)
    % $$$      %
    % $$$      [tTest,yTest] = odeStrLine(tSpan,ray0,npts,dirn,waveType,rayGd);
    % $$$ 
    % $$$      if trajIsNew
    % $$$          indom = inDomain(yTest(:,1:2),rayGd);  % column vec of
    % $$$                                                 % logicals
    % $$$      else
    % $$$          indom = inDomain(yTest(:,1:2),rayGd,[10 10 10 10]);  
    % $$$      end
    % $$$      
    % $$$      badIdxs = find(~indom);
    % $$$      
    % $$$      % update upper time limit if necessary
    % $$$      if any(badIdxs)
    % $$$          dts = diff(tSpan)/npts;
    % $$$          badTimes = tTest(badIdxs);
    % $$$          tStop = max(tPrev,badTimes(1)-dts);  % happens if all
    % $$$                                               % times are bad 
    % $$$          tSpan = [tPrev,tStop]; % adjust upper limit
    % $$$      end

         % Provided we have a good integration time we can integrate
         % over the given time span and see what it looks like
         %
         tr = 0;
         yr = 0;
         if tStop > tPrev
             switch waveType
               case 'EM'
                 [tr,yr] = ode45(@(t,y) odeEmRayFun(t,y,omega_ps, ...
                                                    rayGd,cnstVar,margin),tSpan,ray0);
               case 'EPW'
                 [tr,yr] = ode45(@(t,y) odeLwRayFun(t,y,omega_ps, ...
                                                    rayGd,cnstVar,margin),tSpan,ray0);           
               %otherwise
                 %exit('invalid waveType')
             end

             newTraj = [tr,yr];   % because otherwise ode45 will return
                                  % a struct         
             % need to check and set halt flags if we are too close to
             % theboundary at the last time
             %
             withinMargin = inDomain(yr(end,1:2),rayGd,margin);
             if any(~withinMargin)
                 rayBundle_halt(rayIdx) = 1;   % set halt flag for
                                               % out-of-margin
             end
             % attach solution to rayBundle structure
             %  have two cases here... 
             if trajIsNew
                 rayBundle_trajs{rayIdx} = newTraj;
             else
                 % append to existing
                 oldTraj = rayBundle.trajs{rayIdx}(1:end-1,:); % drop IC
                 rayBundle_trajs{rayIdx} = [oldTraj; newTraj];
                 %             rayBundle.trajs{rayIdx} = newTraj;   % debug
             end
           end  % the if tSpan..

     end   % for loop over rays
     rayBundle.nrays = rayBundle_nrays;
     rayBundle.halt = rayBundle_halt;
     rayBundle.trajs = rayBundle_trajs;
     rayBundle.type = rayBundle_type;
     rayBundle.rayICs = rayBundle_rayICs;
     rayBundle.frequency = rayBundle_frequency;
     rayBundle.direction = rayBundle_direction;
end

 
 % 
 % Local functions follow:
 %

function k0 = toDispSurface(x0,rayBundle_nc,rayIdx,rayGd,rayBundle_frequency,rayBundle_direction,cnstVar)
 % TODISPSURFACE - to do later
 %   
 % TO DO: need this function to work on EPW also
     
     %global cnst
     cnst_c = cnstVar(1);%.c;
     clum  = cnstVar(2);
     ln10  = cnstVar(3);
     twopi = cnstVar(4);
     
     % get magnitude of local wavevector
     omega = rayBundle_frequency(rayIdx);       % 1/s
     % TO DO: need to deal with the case that rayBundle_frequency
     % is a row vector
     %
     omega_ps = 1.e-12*omega;           % 1/ps
     % we assume light - need to fix to be more general
     %    we can use rayBundle_type for this...
     kVac = 1.e-6*abs(omega)/cnst_c;    % 1/um
     [ind1,ind2] = rectInterp2d(x0,rayGd.zVal,rayGd.rVal);
     logNe = rectInterp2d_v2(x0,rayGd.zVal,rayGd.rVal,rayGd.gridNe,ind1,ind2);
     localNe = 10.^logNe;%interpOnTraj('valsNe',[x0 x0],rayGd);
     nc = rayBundle_nc(rayIdx);         % 1/cm3
     k0Mag = kVac*sqrt(1-localNe/nc);   % local wavenumber in
                                        % 1/um
     kdir = rayBundle_direction;        % initial direction
                                        % (unit row vector)
     k0 = k0Mag*kdir;                   % initial k (row) vector
                                        % (1/um)
 end 
 
 
 function inRange = inDomain(x,rayGd,margin)
 % INDOMAIN - given a column vector of positions x, return a list
 % of logicals showing if they are in the domain (given by rayGd)
 % or not
 %   
    
    rayZ = x(:,1);
    rayR = x(:,2);
    
    zmin = rayGd.domain(1) + margin(1);
    zmax = rayGd.domain(2) - margin(2);
    rmin = rayGd.domain(3) + margin(3);
    rmax = rayGd.domain(4) - margin(4);
    
    % could write as zmin = (rayGd.domain+margin)(1)
    
    inRrange = (rayR < rmax) & (rayR > rmin);
    inZrange = (rayZ < zmax) & (rayZ > zmin);
    inRange = inRrange & inZrange;
 end
 
 
 function [t,y] = odeStrLine(tspan,y0,npts,dir,waveType,rayGd)
 % just evolve the ray trajectory in a straight line segment at the
 % appropriate speed with npts and in the direction given by dir (= +1
 %    or -1) which accommodates the case when the ray is integrated
 %    backwards in time.
 %
 %    y0 is a column vector: [z r kz kr]'
 
    global cnst
    
    
    t = linspace(0,tspan(2)-tspan(1),npts)'; % time increment in ps
    ttmp = [t t];
    
    k0 = y0(3:4)';                 % turn into a row vector
    kdir = k0/sqrt(dot(k0,k0)); 
    x0 =y0(1:2)';                  % position row vector

    
    switch waveType
      case 'EM'
        speed = cnst.cumps;  % vacuum speed of light in um/ps
      case 'EPW'
        % interpOnTraj wants y0 to be a row vector
        %
        localTe = interpOnTrajAlt('valsTe',y0',rayGd,cnst);   % eV
        speed = (cnst.vTe1eV)*sqrt(localTe);          % estimate using local Te      
      otherwise
        error('bad wave type in odeStrLine')
    end    
    
    deltaX = dir*speed*kdir;        % [vz vr]
    % x = x0 + t*v
    x = repmat(x0,npts,1) + ttmp.*repmat(deltaX,npts,1);   % speed
                                                           % needs
                                                           % to be
                                                           % in
                                                           % um/ps
    k = repmat(k0,npts,1);
    y = [x k];
 end

 
 function dydt = odeEmRayFun(t,y,omega_ps,rayGd,cVar,margin)
 % RHS for our ray ode for electromagnetic waves
 %
 %     t        - time in ps
 %     y        - phase space point [z r kz kr] ('?)
 %     omega_ps - EM wave frequency in 1/ps
 %     rayGd    - grid struct 
 %  output dydt is a column vector:
 %  dydt = [dz/dt,dr/dt,dk_z/dt,dk_r/dt]'
 %

 %
 % Added a check to ensure that the position y(1:2) where
 % the RHS is to be evaluated is inside the domain where
 % the grid data is defined. Attempting to evaluate outside
 % of the domain will give "triangulation" errors, i.e.,
 % the pointLocation() function will give an error.
 %
 % If the point is outside the domain the function will
 % return zero for dydt in the second and third positions
 %
 % The same needs to be done for odeLwRayFun but I haven't
 % implemented it yet.
 %
 % (JFM 21 July, 2020)
     
    c = cVar(1);%.c;
    clum  = cVar(2);
    ln10  = cVar(3);
    twopi = cVar(4);

    % need these
    lambdaum = twopi*clum/abs(omega_ps); % vac wavelength microns
    kVac = abs(omega_ps)/clum;           % vacuum wavenumber 1/um
    nc = 1.1e21/lambdaum^2;              % crit density in 1/cm^3

    x = y(1:2);       % current position at phase space point y
    kVec = y(3:4);    % current ray wavevector at phase space point y

    goodPt = inDomain(x',rayGd,margin);       
    %goodPt = 1;
    
    if goodPt
        % interpolation for current position
        [weights,inds] = rectLocate(x,rayGd.zVal,rayGd.rVal);
        logNe = triInterp(weights,inds,rayGd.gridNe);     % log10 of electron density
                                         %    disp(logNe)  % debugging
        netonc = 10^(logNe)/nc;
        
        %triValDLogNedz = rayGd.valsDLogNedz(rayGd.DT(ti,:));
        dLogNedz = triInterp(weights,inds,rayGd.gridDLogNedz);  % at phase space point
                                                %    disp(dLogNedz)

        %triValDLogNedr = rayGd.valsDLogNedr(rayGd.DT(ti,:));
        dLogNedr = triInterp(weights,inds,rayGd.gridDLogNedr);%dot(bc',triValDLogNedr')';   % at phase space point
                                                %    disp(dLogNedr)
        
        dzdt = sign(omega_ps)*clum*kVec(1)/kVac;
        drdt = sign(omega_ps)*clum*kVec(2)/kVac;    
        dkzdt = -0.5*ln10*omega_ps*netonc*dLogNedz;
        dkrdt = -0.5*ln10*omega_ps*netonc*dLogNedr;
        
        dydt = [dzdt,drdt,dkzdt,dkrdt]'; % column vector 
    else
        % move ray in a straight line
        dzdt = sign(omega_ps)*clum*kVec(1)/kVac;
        drdt = sign(omega_ps)*clum*kVec(2)/kVac;    
        dkzdt = 0.0;
        dkrdt = 0.0;
        
        dydt = [dzdt,drdt,dkzdt,dkrdt]'; % column vector         
    end    
    
end

 
 function dydt = odeLwRayFun(t,y,omega_ps,rayGd,cVar,margin)
 % RHS for our ray ode for Langmuir waves
 %  output dydt is a column vector:
 %  dydt = [dz/dt,dr/dt,dk_z/dt,dk_r/dt]'
     
 % NOTE: here omega_ps is a scalar (since we deal with a single ray)
     
    c = cVar(1);%.c;
    clum  = cVar(2);
    ln10  = cVar(3);
    twopi = cVar(4);
    wpeConst = cVar(5);
    vTe1eV = cVar(6);
    
    omega = omega_ps;   % wave frequency in rads/ps  % wave frequency in rads/ps

    x = y(1:2);     % current position at phase space point y
    kVec = y(3:4);  % current ray wavevector at phase space point y
    k2 = dot(kVec,kVec);

    goodPt = inDomain(x',rayGd,margin);       
    %goodPt = 1;    
    
    if goodPt
        % interpolation for current position
        [weights,inds] = rectLocate(x,rayGd.zVal,rayGd.rVal);  % rectangle    
        
        % density
        %triValNe = triInterp(weights,inds,rayGd.grid);
        logNe = triInterp(weights,inds,rayGd.gridNe);         % log10 of electron density
                                               %    disp(logNe)  % debugging
        wpe = (wpeConst)*sqrt(10^logNe)*1.e-12; % electron plasma
                                                % frequency (rad/ps)
                                                %    disp(wpe)

        %triValDLogNedz = triInterp(weights,inds,rayGd.grid);
        dLogNedz = triInterp(weights,inds,rayGd.gridDLogNedz);   % at phase space point
                                                %    disp(dLogNedz)

        %triValDLogNedr = rayGd.valsDLogNedr(rayGd.DT(ti,:));
        dLogNedr = triInterp(weights,inds,rayGd.gridDLogNedr);   % at phase space point
                                                %    disp(dLogNedr)
        
        % derivatives of electron temperature
        %triValTe = rayGd.valsTe(rayGd.DT(ti,:));
        Te = triInterp(weights,inds,rayGd.gridTe);%dot(bc',triValTe')';        % electron temperature in eV
        vTe2 =(vTe1eV*sqrt(Te))^2;  % square of electron thermal velocity (um/ps)^2
        
        %triValDLnTedz = rayGd.valsDLnTedz(rayGd.DT(ti,:));
        dLnTedz = triInterp(weights,inds,rayGd.gridDLnTedz);%dot(bc',triValDLnTedz')';   % at phase space point
                                              %    disp(dLnTedz)

        %triValDLnTedr = rayGd.valsDLnTedr(rayGd.DT(ti,:));
        dLnTedr = triInterp(weights,inds,rayGd.gridDLnTedr);%dot(bc',triValDLnTedr')';   % at phase space point
                                              %    disp(dLnTedr)
        
        dzdt = (3.0*vTe2/omega)*kVec(1);
        drdt = (3.0*vTe2/omega)*kVec(2);
        
        dkzdt = -wpe^2/(2.0*omega)*ln10*dLogNedz - (3/2)*(k2*vTe2/ ...
                                                          omega)*dLnTedz;
        
        dkrdt = -wpe^2/(2.0*omega)*ln10*dLogNedr - (3/2)*(k2*vTe2/ ...
                                                          omega)*dLnTedr;
        
        dydt = [dzdt,drdt,dkzdt,dkrdt]'; % column vector 
    else
        Te = 2000.0;                     % dummy electron temperature in eV
        vTe2 =(vTe1eV*sqrt(Te))^2;  % square of elec therm vel (um/ps)

        dzdt = (3.0*vTe2/omega)*kVec(1);
        drdt = (3.0*vTe2/omega)*kVec(2);
        
        dkzdt = 0.0;
        dkrdt = 0.0;
        
        dydt = [dzdt,drdt,dkzdt,dkrdt]'; % column vector         
    end
    
 end

 function [ind1,ind2] = rectInterp2d(query,dim1_val,dim2_val)
    ind1 = closest_val(dim1_val,query(1));
    ind2 = closest_val(dim2_val,query(2));
end


function ind = closest_val(A, val)
    %if ~exist('floorInd','var')
    floorInd = 1;
    %end
    %if ~exist('ceilInd','var')
    ceilInd = length(A);
    %end
    while ceilInd - floorInd > 1
        med = floor((floorInd + ceilInd)/2);
        if A(med) >= val 
            ceilInd = med;
        else
            floorInd = med;
        end
    end

    if ceilInd - floorInd == 1 && (A(floorInd) <= val && A(ceilInd) > val)
        ind = ceilInd;
    else
        ind = 0;
    end  
end

function value = rectInterp2d_v2(qp,dim1_val,dim2_val,vGrid,ind1,ind2)
    f1 = vGrid(ind1-1, ind2);
    f2 = vGrid(ind1, ind2);
    f3 = vGrid(ind1, ind2-1);
    f4 = vGrid(ind1-1, ind2-1);

    top = (f1*(dim1_val(ind1)-qp(1)) + f2*(qp(1)-dim1_val(ind1-1)))/(dim1_val(ind1)-dim1_val(ind1-1));
    bottom = (f4*(dim1_val(ind1)-qp(1)) + f3*(qp(1)-dim1_val(ind1-1)))/(dim1_val(ind1)-dim1_val(ind1-1));
    value = (top*(qp(2)-dim2_val(ind2-1)) + bottom*(dim2_val(ind2)-qp(2)))/(dim2_val(ind2)-dim2_val(ind2-1));
end

