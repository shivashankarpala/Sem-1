import matplotlib.pyplot as plt
import numpy as np

plt.axes(projection = 'polar')
r = 3
rads = np.arange(0, (2*np.pi), 0.01)

for i in rads:
   plt.polar(i, r, 'g.')

plt.show()