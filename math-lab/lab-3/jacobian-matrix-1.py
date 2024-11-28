from sympy import *
from sympy.abc import x, y, z

u = x * y / z
v = y * z / x
w = z * x / y

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
