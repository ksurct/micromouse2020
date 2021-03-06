function [new_pos] = forward_omni_model_error(old_pos, motion)
%
% function [new_pos] = forward_omni_model_error(old_pos, motion)
% 
% Inputs:
%   - old_pos (m, m, radians): vector with the following values of the robots location:
%       1:  x
%       2:  y
%       3:  theta
%   - motion (m): vector of the distances traveled by each motor, positive values are clockwise
%       1: MOTOR_F
%       2: MOTOR_L
%       3: MOTOR_B
%       4: MOTOR_R
%
% Output:
%   - new_pos: position vector of robot after transformation
%
% Based on this paper: https://pdfs.semanticscholar.org/c423/24ef055a86da36e78c32bfb68f15cf1fa053.pdf

% Robot Parameters
d = 0.05; % 5 cm
dt = 0.001;

% First calculate the transformation along the robots axis
k = 1/(4*d);
A = [ 0,    -0.5,  0,     0.5;
      0.5,  0,     -0.5,  0;
      k,    k,     k,     k   ];
transform = A * motion;

err = mapfun(rand(3,1), 0,1, -1 * dt, 1 * dt);

transform = transform + err;

% Translate transform coordinates to global coordinates (counterclockwise rotation)
theta = old_pos(3);
to_global = [ cos(theta),  -sin(theta), 0;
              sin(theta),   cos(theta), 0;
              0,            0,          1 ];
new_pos = (to_global * transform) + old_pos;

end