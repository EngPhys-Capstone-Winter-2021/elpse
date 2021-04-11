load timeResults
figure(1)
loglog(numPoints,times')
title("Interpolation Time Tests")
xlabel("Number of queried points")
ylabel("Time(s)")
legend("Original","Rectangular","Compiled Rectangular","Loop Compiled Rectangular")
set(gca,'fontsize', 18)