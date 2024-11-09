from sympy import *
from sympy.abc import r, t

r1 = 4 * (1 + cos(t))
r2 = 5 * (1 - cos(t))
dr1 = diff(r1, t)
dr2 = diff(r2, t)

t1 = r1 / dr1
t2 = r2 / dr2

q = solve(r1 - r2, t)

w1 = t1.subs({t:float(q[1])})
w2 = t2.subs({t:float(q[1])})

y1 = atan(w1)
y2 = atan(w2)
w = abs(y1 - y2)

print("\n Angle between curves in radians is %0.4f" % w)

