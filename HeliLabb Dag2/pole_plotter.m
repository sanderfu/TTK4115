function pole_plotter(problem_number,k_1)
fprintf('Enjoy plotting some poles <3');
f1 = figure('Name','Pole placement');
grid on;
hold on;
legend_array=[];
number_of_pole_sets = input('How many pole sets to plot: ');
for i=1:number_of_pole_sets
    k_pp=0;
    k_pd=0;
    if problem_number==2
        k_pp=input('Value for k_pp: ');
        k_pd=input('Value for k_pd: ');
        [s1,s2] = pole_finder(k_pp,k_pd,k_1);
        s1_real = real(s1);
        s1_imag = imag(s1);
        s2_real = real(s2);
        s2_imag = imag(s2);
        scatter([s1_real,s2_real],[s1_imag,s2_imag],200,'X');
        kpp_str = int2str(k_pp);
        kpd_str = int2str(k_pd);
        legend_string=strcat('Kpp=',kpp_str,' ','Kpd=',kpd_str);
        legend_array = [legend_array legend_string];
    end
end
legend(legend_array);
line([0,0], ylim, 'Color', 'k', 'LineWidth', 1); %Y_axis
line(xlim, [0,0], 'Color', 'k', 'LineWidth', 1); %X-axis 


end

