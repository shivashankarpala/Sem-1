import matplotlib.pyplot as plt
import numpy as np

def circle(r):
   x = []
   y = []

   for theta in np.linspace(-2*np.pi, 2*np.pi, 100):
      x.append(r*np.cos(theta))
      y.append(r*np.sin(theta))

   plt.plot(x, y)
   plt.show()

circle(5)