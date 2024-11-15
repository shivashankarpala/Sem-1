import sympy
from sympy import Symbol, solve, Derivative, pprint 
from sympy.abc import x, y

f= x**2 + y**2 + x*y + 3*x- 3*y + 4
d1 = Derivative(f, x).doit() 
d2 = Derivative(f, y).doit()

criticalpoints1 = solve(d1)
criticalpoints2 = solve(d2)

s1 = Derivative(f, x, 2).doit() 
s2 = Derivative(f, y, 2).doit()
s3 = Derivative(Derivative(f, y), x).doit() 

print('Function value is ')

q1 = s1.subs({y: criticalpoints1, x: criticalpoints2}).evalf()
q2 = s2.subs({y: criticalpoints1, x: criticalpoints2}).evalf() 
q3 = s3.subs({y: criticalpoints1, x: criticalpoints2}).evalf()

delta=s1 * s2 - s3**2

print(delta, q1)

if (delta > 0 and s1 < 0):
   print(" f takes maximum ") 

elif (delta > 0 and s1 > 0):
   print(" f takes minimum") 
   
if (delta < 0):
   print("The point is a saddle point") 

if (delta == 0):
   print("further tests required")
