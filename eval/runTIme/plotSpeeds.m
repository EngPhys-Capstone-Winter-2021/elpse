function plotSpeeds(nArray,tArray,methodNames)
    %plot multiple speed curves on a loglog plot
    loglog(nArray,tArray)
    ylabel("Time (s)")
    xlabel("Rays")
    legend(methodNames)
end