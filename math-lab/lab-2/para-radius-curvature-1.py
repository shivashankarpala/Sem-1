from sympy import *
from sympy.abc import rho, x, y, r, K, t, a, b, c, alpha

y = (a*sin(t)) ** (3/2)
x = (a*cos(t)) ** (3/2)
dydx = simplify(Derivative(y, t).doit()) / simplify(Derivative(x, t).doit()) 
rho = simplify((1 + dydx**2)**1.5 / (Derivative(dydx, t).doit() / (Derivative(x, t).doit())))

print('\nRadius of curvature is')
display(ratsimp(rho))

t1 = pi/4
r1 = 1;
rho1 = rho.subs(t, t1);
rho2 = rho1.subs(a, r1);
curvature = 1/rho2;

display('\nRadius of curvature at r = 1 and t = pi/4 is', simplify (rho2)); 
print('\nCurvature at (1, pi/4) is', float (curvature))
