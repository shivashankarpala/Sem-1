from pylab import * 

theta = linspace(0, 2*np.pi, 1000)
r1 = 5 + 5*cos(theta)

polar(theta,r1,'r')
show()