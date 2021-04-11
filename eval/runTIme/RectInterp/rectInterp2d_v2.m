function value = rectInterp2d_v2(qp,dim1_val,dim2_val,vGrid,ind1,ind2)
    f1 = vGrid(ind1-1, ind2);
    f2 = vGrid(ind1, ind2);
    f3 = vGrid(ind1, ind2-1);
    f4 = vGrid(ind1-1, ind2-1);

    top = (f1*(dim1_val(ind1)-qp(1)) + f2*(qp(1)-dim1_val(ind1-1)))/(dim1_val(ind1)-dim1_val(ind1-1));
    bottom = (f4*(dim1_val(ind1)-qp(1)) + f3*(qp(1)-dim1_val(ind1-1)))/(dim1_val(ind1)-dim1_val(ind1-1));
    value = (top*(qp(2)-dim2_val(ind2-1)) + bottom*(dim2_val(ind2)-qp(2)))/(dim2_val(ind2)-dim2_val(ind2-1));
end
