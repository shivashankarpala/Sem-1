from sympy import *
from sympy.abc import x
from math import inf

l = Limit((1 + 1 / x)**x, x, inf).doit()
display(l)
