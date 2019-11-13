function plotter(est,enc,title_text,map_name, mode_text)
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
f1 = figure;
x_text = 'time [s]';
est = transpose(est.ans);
enc = transpose(enc.ans);
    
plot(est(:,1),est(:,2),enc(:,1),enc(:,2)), xlabel(x_text), title(title_text), legend('Estimate', mode_text);
grid on;
savefig(strcat(map_name,title_text,'.fig'));
saveas(gcf,strcat(map_name,title_text,'.png'));




end

