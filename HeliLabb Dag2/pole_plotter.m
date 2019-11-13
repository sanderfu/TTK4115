function pole_plotter(problem_number,k_1)
fprintf('Enjoy plotting some poles <3');
%f1 = figure('Poles placement');
number_of_pole_sets = input('How many pole sets to plot: ');
for i=1:number_of_pole_sets
    k_pp=0;
    k_pd=0;
    if problem_number==2
        k_pp=input('Value for k_pp: ');
        k_pd=input('Value for k_pd: ');
        s1 = pole_finder(k_pp,k_pd,k_1);
        fprintf(s1);
    end
end



end

