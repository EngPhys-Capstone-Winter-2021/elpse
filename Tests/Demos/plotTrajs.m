function plotTrajs(trajs)
    for i = 1:length(trajs)
        plot(trajs{i}(:,2),trajs{i}(:,3))
        hold on
    end
    hold off
end