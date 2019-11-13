% FOR HELICOPTER NR 3-10
% This file contains the initialization for the helicopter assignment in
% the course TTK4115. Run this file before you execute QuaRC_ -> Build 
% to build the file heli_q8.mdl.

% Oppdatert høsten 2006 av Jostein Bakkeheim
% Oppdatert høsten 2008 av Arnfinn Aas Eielsen
% Oppdatert høsten 2009 av Jonathan Ronen
% Updated fall 2010, Dominik Breu
% Updated fall 2013, Mark Haring
% Updated spring 2015, Mark Haring


%%%%%%%%%%% Calibration of the encoder and the hardware for the specific
%%%%%%%%%%% helicopter
Joystick_gain_x = 0.5;
Joystick_gain_y = 0.5;


%%%%%%%%%%% Physical constants
g = 9.81; % gravitational constant [m/s^2]
l_c = 0.46; % distance elevation axis to counterweight [m]
l_h = 0.66; % distance elevation axis to helicopter head [m]
l_p = 0.175; % distance pitch axis to motor [m]
m_c = 1.92; % Counterweight mass [kg]
m_p = 0.72; % Motor mass [kg]

v_s0 = 7.7;

k_f = (2*m_p*g*l_h-m_c*g*l_c)/(l_h*v_s0); % Motor constant
k_1 = k_f/(2*m_p*l_p); % 
k_2 = (l_h*k_f)/(m_c*l_c^2+2*m_p*l_h^2); 
k_3 = (v_s0*l_h*k_f)/(m_c*l_c^2+2*m_p*(l_h^2+l_p^2));

% problem_to_run=input('What problem to run?');

k_pp=0;
k_pd=0;


%pole_plotter(2,k_1);
% problem_number=2;
% fprintf('Enjoy plotting some poles <3');
% f1 = figure('Name','Pole placement');
% grid on;
% hold on;
% number_of_pole_sets = input('How many pole sets to plot: ');
% plotHandles = zeros(1,number_of_pole_sets);
% plotLabels = cell(1,number_of_pole_sets);
% colors = ['red','blue'];
% for i=1:number_of_pole_sets
%     k_pp=0;
%     k_pd=0;
%     if problem_number==2
%         k_pp=input('Value for k_pp: ');
%         k_pd=input('Value for k_pd: ');
%         [s1,s2] = pole_finder(k_pp,k_pd,k_1);
%         s1_real = real(s1);
%         s1_imag = imag(s1);
%         s2_real = real(s2);
%         s2_imag = imag(s2);
%         kpp_str = int2str(k_pp);
%         kpd_str = int2str(k_pd);
%         legend_string=strcat('Kpp=',kpp_str,' ','Kpd=',kpd_str);
%         plotHandles(i) = scatter([s1_real,s2_real],[s1_imag,s2_imag],200,colors(:,i),'X');
%         plotLabels{i} = legend_string;
%     end
% end
% legend(plotHandles,plotLabels);
% line([0,0], ylim, 'Color', 'k', 'LineWidth', 1); %Y_axis
% line(xlim, [0,0], 'Color', 'k', 'LineWidth', 1); %X-axis 

% if problem_to_run==2
%     fprintf('Running problem 2\n');
%     k_pp=input('Value for k_pp: ');
%     k_pd=input('Value for k_pd: ');
% elseif problem_to_run==3
%     fprintf('Running problem 3\n');
%     omega_0 = input('Value for omega_0: ');
%     zeta = input('Value for zeta: ');
%     k_pp = omega_0^2/k_1;
%     k_pd = (2*zeta*omega_0)/k_1;
% else
%     fprintf('No valid porblem\n');
% end




