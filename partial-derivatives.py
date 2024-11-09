from sympy import *
from sympy.abc import x, y

u = exp(x) * (x * cos(y) - y * sin(y))
dux = diff(u, x)
duy = diff(u, y)
duxy = diff(dux, y)
duyx = diff(duy, x)

if duxy==duyx:
   print ('Mixed partial derivatives are equal')
else:
   print('Mixed partial derivatives are not equal')