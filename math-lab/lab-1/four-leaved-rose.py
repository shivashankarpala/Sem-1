from pylab import *

theta = linspace(0, 2*np.pi, 1000)
r = 2*abs(cos(2*theta))
polar(theta, r, 'r')
show()