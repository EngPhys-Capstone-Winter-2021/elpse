function kPlot(data,algSet)
    dlength = length(data);
    maxVal = zeros([1,dlength]);
    minVal = zeros([1,dlength]);
    meanVal = zeros([1,dlength]);
    stdevVal = zeros([1,dlength]);
    for i = 1:dlength
        maxVal(i) = data{i}.max;
        minVal(i) = data{i}.min;
        meanVal(i) = data{i}.mean;
        stdevVal(i) = data{i}.stdev;
    end
    X = categorical({'Max','Min','Mean','Std. Dev'});
    Y = [maxVal;minVal;meanVal;stdevVal];
    bar(X,Y)
    ylabel("Percentage Wavevector Magnitude Difference")
    legend(algSet);
    title("Wavevector Magnitude Differences")
end