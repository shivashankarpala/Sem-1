from sympy import *
from sympy.abc import rho, phi, theta

X = rho * cos(phi)* sin(theta);
Y = rho * cos(phi) * cos(theta);
Z = rho * sin(phi);

dx = Derivative(X, rho).doit() 
dy = Derivative(Y, rho).doit() 
dz = Derivative(Z, rho).doit(); 

dx1 = Derivative(X, phi).doit() 
dy1 = Derivative(Y, phi).doit() 
dz1 = Derivative(Z, phi).doit(); 

dx2 = Derivative(X, theta).doit()
dy2 = Derivative(Y, theta).doit()
dz2 = Derivative(Z, theta).doit();

J = Matrix([[dx, dy, dz], [dx1, dy1, dz1], [dx2,dy2,dz2]]); 

print("\nThe Jacobian matrix is ")
display (J)
print("\nJ = ")
display(simplify(Determinant(J).doit()))