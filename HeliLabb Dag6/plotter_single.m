function plotter_single(est,title_text,map_name)
    
f1 = figure;
x_text = 'time [s]';
est = transpose(est.ans);
    
plot(est(:,1),est(:,2)), xlabel(x_text), title(title_text), legend('Estimate');
grid on;
savefig(strcat(map_name,title_text,'.fig'));
saveas(gcf,strcat(map_name,title_text,'.png'));


end