function [output,maxDiff] = kStat(kDiffs,time)
    maxDiff = zeros([1,length(kDiffs)]);
    for i = 1:length(kDiffs)
       maxDiff(i) = max(kDiffs{i}); 
    end
    output.max = max(maxDiff);
    output.min = min (maxDiff);
    output.mean = mean(maxDiff);
    output.stdev = std(maxDiff);
    output.time = time;
end