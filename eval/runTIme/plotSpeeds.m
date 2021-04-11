function plotSpeeds(nArray,tArray,methodNames)
    loglog(nArray,tArray)
    ylabel("Time (s)")
    xlabel("Rays")
    legend(methodNames)
end