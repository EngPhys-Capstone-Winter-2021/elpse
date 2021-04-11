function createTestPack(nrays,name)
     path(path,'../../Source')
     path(path,'../../Plotting')
     path(path,'RectInterp')
     load gridNe
     %path(path,'./Steven_dev')



         % give it a useful name
     [rayBundle,rayGd] = rayInit(nrays);


    rayGd.uniqueR = uniqueR;
    rayGd.uniqueZ = uniqueZ;
    rayGd.grid = valsNe;
    rayGd.gridR = valsNeDr;
    rayGd.gridZ = valsNeDz;

    save(name,"rayBundle","rayGd")
end


 
