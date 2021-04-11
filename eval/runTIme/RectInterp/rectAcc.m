%% Rectangular Interpolation testbench

%% Generate the x and y values
%define the rectangular domain
a = -10; b = 10;
c = -15; d = 15;

x_vals = linspace(a,b);%sort(a + (b-a).*rand(100,1));
y_vals = linspace(c,d);%sort(c + (d-c).*rand(100,1));

%define the mesh to be a 2D gaussian

A = 100;
x0 = 0; y0 = 0;
sigx = 10; sigy = 10;
[X_grid,Y_grid] = meshgrid(x_vals,y_vals);
meshVal = zeros(length(x_vals),length(y_vals));
for i = 1:length(x_vals)
    for j = 1:length(y_vals)
        meshVal(i,j) = A*exp( -( ((x_vals(i)-x0)^2)/(2*sigx^2) + ((y_vals(j)-x0)^2)/(2*sigy^2) ) );
    end
end

%mesh(X_grid,Y_grid,meshVal)

%test for random point
qp = -9+18*rand(100,2);
interpolated = zeros([1,100]);
calculated = zeros([1,100]);
errors = zeros([1,100]);
for i = 1:100
    [w_val,inds] = rectLocate(qp(i,:),x_vals,y_vals);
    interpolated(i) = triInterp(w_val,inds,meshVal);
    calculated(i) = A*exp( -( ((qp(i,1)-x0)^2)/(2*sigx^2) + ((qp(i,1)-x0)^2)/(2*sigy^2) ) );
    errors(i) = abs(interpolated(i) - calculated(i))/interpolated(i);
    %fprintf('Interpolated:   %.6f\n',interpolated);
    %fprintf('Calculated:     %.6f\n',calculated);
end
plot(errors)
disp("Error Mean:" + mean(errors))
disp("Error Std:" + std(errors))