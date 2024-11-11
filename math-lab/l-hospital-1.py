from sympy import *
from sympy.abc import x

l = Limit((5 *  x**4 - 4 * x**2 -1) / (10 - x - 9 * x**3), x, 1).doit()
print(l)
