function [y,stad] = Dopri54EmGraphical(t0,t1,y0,tolerance,rpar)
% DOPRI54 solves system of ODEs with the Dormand and Prince 54 code.
% INPUT
% funcion - integrated to this file. Check at the end for the equation used
% problem description.
% Call: yprime = fun(t,y,rpar) where funcion = 'fun'.
% t - Time (scalar).
% y - Solution column-vector.
% rpar - parameters possibly needed in buinding yprime
% yprime - Returned derivative column-vector; yprime(i)
% = dy(i)/dt.
% t0 - Initial value of t.
% t1 - Final value of t (must be t1 > t0).
% y0 - Initial value column-vector.
% tolerance - tolerance for the local error
% OUTPUT
% y - computed solution at y=t1.
% stad - vector containing number of steps, rejections and
% function calls
% Sample code obtained from https://www.mathstools.com/section/main/dormand_prince_method#.X62QhmhKiUm

    
t=t0;
y=y0;
h=tolerance^(1/5)/4;
step=0;
nrej=0;
fcall=1;
a4=gpuArray([44/45 -56/15 32/9]');
a5=gpuArray([19372/6561 -25360/2187 64448/6561 -212/729]');
a6=gpuArray([9017/3168 -355/33 46732/5247 49/176 -5103/18656]');
a7=gpuArray([35/384 0 500/1113 125/192 -2187/6784 11/84]');
e=gpuArray([71/57600 -1/40 -71/16695 71/1920 -17253/339200 22/525]');
k1=dydt(t,y,rpar);

while t < t1
if t+h > t1; h=t1-t; end
k2=dydt(t+h/5,y+h*k1/5,rpar);
k3=dydt(t+3*h/10,y+h*(3*k1+9*k2)/40,rpar);
k4=dydt(t+4*h/5,y+h*(a4(1)*k1+a4(2)*k2+a4(3)*k3),rpar);
k5=dydt(t+8*h/9,y+h*(a5(1)*k1+a5(2)*k2+a5(3)*k3+a5(4)*k4),rpar);
k6=dydt(t+h,y+h*(a6(1)*k1+a6(2)*k2+a6(3)*k3+a6(4)*k4+a6(5)*k5),rpar);
yt=y+h*(a7(1)*k1+a7(3)*k3+a7(4)*k4+a7(5)*k5+a7(6)*k6);
k2=dydt(t+h,yt,rpar);
est=norm(h*(e(1)*k1+e(2)*k2+e(3)*k3+e(4)*k4+e(5)*k5+e(6)*k6),inf);
fcall=fcall+6;
% [t h est]

if est < tolerance
t=t+h;
k1=k2;
step=step+1;
y=yt;
else
nrej=nrej+1;
end
h=.9*min((tolerance/(est+eps))^(1/5),10)*h;

end
if nargout > 1
stad=[step nrej fcall];
end

end

function dydt = odeEmRayFunGraphical(t,y, omega_ps, rayGd)
    global cnst

    % need these
    lambdaum = twopi*clum/abs(omega_ps); % vac wavelength microns
    kVac = abs(omega_ps)/clum;           % vacuum wavenumber 1/um
    nc = 1.1e21/lambdaum^2;              % crit density in 1/cm^3

    x = y(1:2);     % current position at phase space point y
    kVec = y(3:4);  % current ray wavevector at phase space point y
    
    % interpolation for current position
    [ti,bc] = pointLocation(rayGd.DT,x');  % Delauney triangles    
    
    triValNe = rayGd.valsNe(rayGd.DT(ti,:));
    logNe = dot(bc',triValNe')';     % log10 of electron density
%    disp(logNe)  % debugging
    netonc = 10^(logNe)/nc;
    
    triValDLogNedz = rayGd.valsDLogNedz(rayGd.DT(ti,:));
    dLogNedz = dot(bc',triValDLogNedz')';   % at phase space point
%    disp(dLogNedz)

    triValDLogNedr = rayGd.valsDLogNedr(rayGd.DT(ti,:));
    dLogNedr = dot(bc',triValDLogNedr')';   % at phase space point
%    disp(dLogNedr)
    
    dzdt = sign(omega_ps)*clum*kVec(1)/kVac;
    drdt = sign(omega_ps)*clum*kVec(2)/kVac;    
    dkzdt = -0.5*ln10*omega_ps*netonc*dLogNedz;
    dkrdt = -0.5*ln10*omega_ps*netonc*dLogNedr;
    
    dydt = [dzdt,drdt,dkzdt,dkrdt]'; % column vector 
end
