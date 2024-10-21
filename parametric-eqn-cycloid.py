import matplotlib.pyplot as plt
import numpy as np

def cycloid(r):
   x = []
   y = []

   for theta in np.linspace(-2*np.pi, 2*np.pi, 100):
      x.append(r*(theta - np.sin(theta)))
      y.append(r*(1 - np.cos(theta)))

   plt.plot(x, y)
   plt.show()
cycloid(2)