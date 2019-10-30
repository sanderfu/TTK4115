%Finding K with LQR
q1 = 100;
q2 = 10;
q3 = 80;
r1 = 1;
r2 = 1;
%Defining matrices
A = [0 1 0; 0 0 0 ; 0 0 0];
B = [0 0; 0 k_1; k_2 0];
Q = [q1 0 0; 0 q2 0; 0 0 q3];
R = [r1 0; 0 r2];
C = [1 0 0; 0 0 1];
%Using LQR optimization to find K
K = lqr(A,B,Q,R);