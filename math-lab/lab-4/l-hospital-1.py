from sympy import *
from sympy.abc import x

l = Limit(sin(x)/x, x, 0).doit()
print(l)
