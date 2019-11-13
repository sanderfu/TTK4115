function [s1,s2] = pole_finder(k_pp,k_pd,k_1)

under_the_root = (k_1*k_pd)^2-4*k_1*k_pp;
the_root=sqrt(under_the_root);

s1 = (-k_1*k_pd+the_root)/2;
s2 = (-k_1*k_pd-the_root)/2;
end

