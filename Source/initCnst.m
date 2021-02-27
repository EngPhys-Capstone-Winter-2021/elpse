function cnst = initCnst()
    cnst = struct(...    %
     'c',[], ...      %   speed of light in vacuum [m/s]
     'e',[], ...      %   electron charge [C]
     'eps0',[], ...   %   permittivity of vacuum [F/m]
     'mp',[]) ;       %   proton mass [kg]

    % various math
    cnst.pi       = 3.141592653589793;
    cnst.twopi    = 6.283185307179586;
    cnst.ln10     = 2.302585092994046;
    
    % various physical
    cnst.c        = 2.9979E+8;      %   speed of light in vacuum [m/s]
    cnst.cumps    = 299.79;         %     ... ditto [um/ps]
    cnst.e        = 1.6022E-19;     %   electron charge [C]
    cnst.mp       = 1.6726E-27;     %   proton mass [kg]
    cnst.eps0     = 8.8542E-12;     %   permittivity of vacuum
                                    %   [F/m]
    
    % various plasma
    cnst.vTe1eV = 0.419;    % VTe = [4.19e7*sqrt(Te)] in um/ps with Te
                            % in eV
    cnst.wpe         = 5.64e4;   % wpe = 5.64e4*sqrt(ne) in rad/s
    cnst.lamDebye    = 7.43e2;   % lamDebye = 7.43e2*sqrt(Te/ne) in

    % various laser plasma
    cnst.vosc = 8.095e8;    % multiply by sqrt(I_15) and lambda_0
                            % to get vosc in cm/sec. The laser
                            % vacuum wavelength is in um
    
    % 
    cnst.voscToC = 8.095e6/cnst.c; % multiply by sqrt(I_15) and
                                   % lambda_0 in um                              
    
    % default laser params
    cnst.lambda0 = 0.351e-6; % m
    cnst.omega0 = (cnst.c)*(cnst.twopi)/(cnst.lambda0); % 1/secs
    
    %Used in Dopri54 Functions
    cnst.a4=[44/45 -56/15 32/9]'; %gpuArray([44/45 -56/15 32/9]');
    cnst.a5=[19372/6561 -25360/2187 64448/6561 -212/729]';%gpuArray([19372/6561 -25360/2187 64448/6561 -212/729]');
    cnst.a6=[9017/3168 -355/33 46732/5247 49/176 -5103/18656]';%gpuArray([9017/3168 -355/33 46732/5247 49/176 -5103/18656]');
    cnst.a7=[35/384 0 500/1113 125/192 -2187/6784 11/84]';%gpuArray([35/384 0 500/1113 125/192 -2187/6784 11/84]');
    cnst.e=[71/57600 -1/40 -71/16695 71/1920 -17253/339200 22/525]';%gpuArray([71/57600 -1/40 -71/16695 71/1920 -17253/339200 22/525]');
    
    %Used in Graphical Dopri54 Functions
    cnst.g_a4=[44/45 -56/15 32/9]'; %gpuArray([44/45 -56/15 32/9]');
    cnst.g_a5=[19372/6561 -25360/2187 64448/6561 -212/729]';%gpuArray([19372/6561 -25360/2187 64448/6561 -212/729]');
    cnst.g_a6=[9017/3168 -355/33 46732/5247 49/176 -5103/18656]';%gpuArray([9017/3168 -355/33 46732/5247 49/176 -5103/18656]');
    cnst.g_a7=[35/384 0 500/1113 125/192 -2187/6784 11/84]';%gpuArray([35/384 0 500/1113 125/192 -2187/6784 11/84]');
    cnst.g_e=[71/57600 -1/40 -71/16695 71/1920 -17253/339200 22/525]';%gpuArray([71/57600 -1/40 -71/16695 71/1920 -17253/339200 22/525]');
