import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 2, 10)

plt.plot(x, x, label= 'linear')
plt.plot(x, x**2, label= 'Quadratic')
plt.plot(x, x**3, label= 'Cubic')

plt.xlabel('X-axis')
plt.ylabel('Y-axis')

plt.title('Simple Plot')
plt.legend()
plt.show()