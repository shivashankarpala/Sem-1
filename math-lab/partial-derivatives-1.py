from sympy import *
from sympy.abc import x, y

u = exp(x) * (x * cos(y) - y * sin(y))

dux = diff(u, x)
duy = diff(u, y)
duxx = diff(dux, x)
duyy = diff(duy, y)

w = duxx + duyy
w1 = simplify(w)

display(u)
print("Ans: ", float(w1))