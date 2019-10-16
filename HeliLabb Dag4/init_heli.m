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
Joystick_gain_x = 1;
Joystick_gain_y = 1;


%%%%%%%%%%% Physical constants
g = 9.81; % gravitational constant [m/s^2]
l_c = 0.46; % distance elevation axis to counterweight [m]
l_h = 0.66; % distance elevation axis to helicopter head [m]
l_p = 0.175; % distance pitch axis to motor [m]
m_c = 1.92; % Counterweight mass [kg]
m_p = 0.72; % Motor mass [kg]

v_s0 = 7.7;

k_f = (2*m_p*g*l_h-m_c*g*l_c)/(l_h*v_s0) % Motor constant
k_1 = k_f/(2*m_p*l_p); % 
k_2 = (l_h*k_f)/(m_c*l_c^2+2*m_p*l_h^2); 
k_3 = (v_s0*l_h*k_f)/(m_c*l_c^2+2*m_p*(l_h^2+l_p^2));

omega_0 = 2;
zeta = 1;

k_pp = omega_0^2/k_1;
k_pd = (2*zeta*omega_0)/k_1;

%Finding k via Linear Quadratic Regulator

q1 = 100;
q2 = 10;
q3 = 80;
r1 = 1;
r2 = 1;

A = [0 1 0; 0 0 0 ; 0 0 0];
B = [0 0; 0 k_1; k_2 0];
Q = [q1 0 0; 0 q2 0; 0 0 q3];
R = [r1 0; 0 r2];

C = [1 0 0; 0 0 1];




K = lqr(A,B,Q,R)
F = inv(C*inv(B*K-A)*B)

q1_aug = 100;
q2_aug = 0.1;
q3_aug = 100;
q4_aug = 20;
q5_aug = 1;
r2_aug = 1;
r1_aug = 1;

A_aug = [0 1 0 0 0; 0 0 0 0 0 ; 0 0 0 0 0; 1 0 0 0 0; 0 0 1 0 0];
B_aug = [0 0; 0 k_1; k_2 0; 0 0; 0 0];
Q_aug = [q1_aug 0 0 0 0; 0 q2_aug 0 0 0 ; 0 0 q3_aug 0 0; 0 0 0 q4_aug 0; 0 0 0 0 q5_aug];
R_aug = [r1_aug 0; 0 r2_aug];
C_aug = [1 0 0 0 0; 0 0 1 0 0];

K_aug = lqr(A_aug,B_aug,Q_aug,R_aug)
K_aug_K1 = K_aug(1:2, 1:3) 
F_aug = inv(C*inv(B*K_aug_K1-A)*B)

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%Day 4

%Port is linked to the individual computer and found in Device Manager
PORT = 3; 

%Prob 3 - Observability
J_lambda = m_c*l_c^2+2*m_p*(l_h^2+l_p^2);
L_3 = l_h*k_f;
A = [0 1 0 0 0 0; 0 0 0 0 0 0; 0 0 0 1 0 0; 0 0 0 0 0 0; 0 0 0 0 0 1; L_3/J_lambda 0 0 0 0 0]
C = [0 1 0 1 0 1]
O_matrix = obsv(A,C)

%Prob 6 - Noise
M_I = [pitch_rate_imu elevation_rate_imu travel_rate_imu pitch_imu elevation_imu]
V_I = [nancov(M_I(:,1)); nancov(M_I(:,2)); nancov(M_I(:,3)); nancov(M_I(:,4)); nancov(M_I(:,5))]

M_E = [pitch_rate_encoder elevation_rate_encoder travel_rate_encoder pitch_encoder elevation_encoder];
V_E = [nancov(M_E(:,1)); nancov(M_E(:,2)); nancov(M_E(:,3)); nancov(M_E(:,4)); nancov(M_E(:,5))]

%How to load .mat and get the value matrix
% test = load('pitch_rate_imu.mat', 'ans');
% array = transpose(test.ans);
% array2 = array(:,2)