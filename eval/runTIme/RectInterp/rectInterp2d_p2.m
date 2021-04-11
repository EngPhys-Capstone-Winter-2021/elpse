function interpVal = rectInterp2d_p2(query,dim1_val,dim2_val,vGrid,ind1,ind2)
    area_SW = (query(1)-dim1_val(ind1-1))*(query(2)-dim2_val(ind2-1));
    area_SE = (query(1)-dim1_val(ind1-1))*(dim2_val(ind2)-query(2));
    area_NE = (dim1_val(ind1)-query(1))*(dim2_val(ind2)-query(2));
    area_NW = (dim1_val(ind1)-query(1))*(dim2_val(ind2-1)-query(2));
    totalArea = (dim1_val(ind1)-dim1_val(ind1-1))*(dim2_val(ind2)-dim2_val(ind2-1));
       
    
    %dist_NE = (query(1)-dim1_val(ind1))^2 + (query(2)-dim2_val(ind2))^2;
    %dist_NW = (query(1)-dim1_val(ind1))^2 + (query(2)-dim2_val(ind2-1))^2;
    %dist_SW = (query(1)-dim1_val(ind1-1))^2 + (query(2)-dim2_val(ind2))^2;
    %dist_SE = (query(1)-dim1_val(ind1-1))^2 + (query(2)-dim2_val(ind2-1))^2;
    %total_dist = dist_NE + dist_NW + dist_SW + dist_SE;

    val_NE = area_SW*vGrid(ind1,ind2)/totalArea;
    val_NW = area_SE*vGrid(ind1,ind2-1)/totalArea;
    val_SW = area_NE*vGrid(ind1-1,ind2)/totalArea;
    val_SE = area_NW*vGrid(ind1-1,ind2-1)/totalArea;

    interpVal = val_NE + val_NW + val_SW + val_SE;
end