function value = triInterp(weights,inds,grid)
   %acquire interpolated value by multiplying value of nearest neighbours
   %by their weighting
   %(J.S, R.F. April 2020)
   value = 0;
   for i = 1:4
        value = value + weights(i)*grid(inds(i,1),inds(i,2));
   end    
end