function success = makePlotList2(rayBundle,rayBundle1,rayGd)

% MAKEPLOT - to do later

%


% pltIncl.density = true;

 

 

% with the straight line

figure(1);

clf

 

pcolor(rayGd.zSblock,rayGd.rSblock,rayGd.neblock);

shading interp

colorbar

hold on

 

title('Log10 of electron density (1/cm3)');

xlabel('z in um');

ylabel('r in um');

 

%legend('str line');

xt = 600; % microns

yt = 1000;

text(xt,yt,sprintf("time: %3.2f ns",rayGd.time))

 

hold on

qcrit = log10(rayBundle.nc);

contour(rayGd.zSblock,rayGd.rSblock,rayGd.neblock,[qcrit ...

    qcrit],'k:')

qc4 = log10(rayBundle.nc/4);

contour(rayGd.zSblock,rayGd.rSblock,rayGd.neblock,[qc4 ...

    qc4],'k:')

n10 = log10(rayBundle.nc/10);

contour(rayGd.zSblock,rayGd.rSblock,rayGd.neblock,[n10 ...

    n10],'k:')

if ~exist('rayRange','var')

    rayRange = 1:2:rayBundle.nrays;

end

v=VideoWriter("test7.mp4",'MPEG-4'); %adil

open(v);

for n = 2:1500

    for iplt = rayRange

        plot(rayBundle.trajs{iplt}(n-1:n,2),rayBundle.trajs{iplt}(n-1:n,3),'g-')
        plot(rayBundle1.trajs{iplt}(n-1:n,2),rayBundle1.trajs{iplt}(n-1:n,3),'r:')
    end

    frame = getframe(gcf); %adil

    writeVideo(v,frame);

end

close(v);

hold off

success = 1;

 

end