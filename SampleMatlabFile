%--------------------------------------------------------------------------
% Coder Maker: Chaozhe He, through the lecture note of Jan.
% University of Michigian, Mechanical Engineering 
% Create Date: 02/09/2014
% Update Date: 02/09/2014
%--------------------------------------------------------------------------
% This function gives the numerical Jacobian of function f at x, with an
% accuracy step of h, but it only travel along only one of the direction 
%--------------------------------------------------------------------------

function df=HczJacobian(f,x,h)
nc=length(x);
nr=length(f(x));
df=zeros(nr,nc);
for i=1:nc
    xu=x;
    xu(i)=xu(i)+h;
    xl=x;
    xl(i)=xl(i)-h;
    df(:,i)=(f(xu)-f(xl))/(2*h);
end
end
