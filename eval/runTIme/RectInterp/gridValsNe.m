load rayGd
uniqueZ = unique(rayGd.DT.Points(:,1));
uniqueZ = sort(uniqueZ);
uniqueR = unique(rayGd.DT.Points(:,2));
uniqueR = sort(uniqueR);
valsNe = createRectGrid(uniqueZ,uniqueR,rayGd.DT.Points,rayGd.valsNe);
valsNeDr = createRectGrid(uniqueZ,uniqueR,rayGd.DT.Points,rayGd.valsDLnTedr);
valsNeDz = createRectGrid(uniqueZ,uniqueR,rayGd.DT.Points,rayGd.valsDLnTedz);
save("gridNe")