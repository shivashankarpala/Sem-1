from sympy import *
from sympy.abc import x, y, z

u = x + 3 * y**2 - z**3
v = 4 * x**2 * y * z 
w = 2 * z**2 - x * y

dux = diff(u, x)
duy = diff(u, y) 
duz = diff(u, z);

dvx = diff(v, x) 
dvy = diff(v, y) 
dvz = diff(v, z);

dwx = diff(w, x)
dwy = diff(w, y)
dwz = diff(w, z);

J = Matrix([[dux, duy, duz], [dvx, dvy, dvz], [dwx, dwy, dwz]]);
print("\nThe Jacobian matrix is \n")
display(J)

jac = det(J).doit()
print("\nJ = ", jac)

J1 = J.subs([(x, 1), (y, -1), (z, 0)])
print("\nJac at (1, -1, 0) = ")

jac1 = det(J1).doit()
display(jac1)



