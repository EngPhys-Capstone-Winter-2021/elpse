function VqLin = loopRectInterp2d(PqList,Z,R,V)
%DT - Delaunay Triangulation
%ValsNe - log density value at each given coordinate
%PqList - matrix with requested coordinates for interpolation: ordered
%[z,r]
    VqLin = zeros([size(PqList,1),1]);
    for i=1:size(PqList,1)
        VqLin(i) = rectInterp2d(PqList(i,:),Z,R,V);
    end
end