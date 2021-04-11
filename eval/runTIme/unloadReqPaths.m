function unloadReqPaths(testPaths)
    for tPath = 1:length(testPaths)
       rmpath(pwd + "/" + testPaths(tPath)); 
    end
end