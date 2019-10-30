%Finding K_aug with LQR
q1_aug = 100;
q2_aug = 0.1;
q3_aug = 100;
q4_aug = 20;
q5_aug = 1;
r1_aug = 1;
r2_aug = 1;
%Defining matrices
A_aug = [0 1 0 0 0; 0 0 0 0 0 ; 0 0 0 0 0; 1 0 0 0 0; 0 0 1 0 0];
B_aug = [0 0; 0 k_1; k_2 0; 0 0; 0 0];
Q_aug = [q1_aug 0 0 0 0; 0 q2_aug 0 0 0 ; 0 0 q3_aug 0 0; 0 0 0 q4_aug 0; 0 0 0 0 q5_aug];
R_aug = [r1_aug 0; 0 r2_aug];
C_aug = [1 0 0 0 0; 0 0 1 0 0];
%Using LQR optimization to find K_aug
K_aug = lqr(A_aug,B_aug,Q_aug,R_aug)