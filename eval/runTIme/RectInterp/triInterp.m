function value = triInterp(weights,inds,grid)
   value = 0;
   for i = 1:4
        value = value + weights(i)*grid(inds(i,1),inds(i,2));
   end    
end