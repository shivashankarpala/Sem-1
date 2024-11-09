from sympy import *
from sympy.abc import r, t

r = 4*(1 + cos(t))
r1 = Derivative(r, t).doit()
r2 = Derivative(r1, t).doit()
rho = (r**2 + r1**2)**(1.5) / (r**2 + 2 * r1**2 - r*r2)
rho1 = rho.subs(t, pi/2)

print("\nThe radius of curvature is %3.4f units" % rho1)


