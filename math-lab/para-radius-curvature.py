from sympy import *
from sympy.abc import rho, x, y, r, k, t, a, b, c, alpha

y = (sqrt(x) - 4)**2
y = a*sin(t)
x = a*cos(t)

dydx = simplify(Derivative(y, t).doit()) / simplify(Derivative(x,t).doit())
rho = simplify((1 + dydx**2)**1.5 / (Derivative(dydx, t).doit() / (Derivative(x,t).doit())))

print('\nRadius of curvature is')
display(ratsimp(rho))

t1 = pi/2
r1 = 5
rho1 = rho.subs(t,t1);
rho2 = rho1.subs(a,r1);
print('\nRadius of curvature at r = 5 and t = pi/2 is', simplify(rho2));
curvature = 1 / rho2;
print('\nCurvature at (5, pi/2) is', float(curvature))
