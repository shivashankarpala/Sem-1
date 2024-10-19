import matplotlib.pyplot as plt
import numpy as np
x = np.arange(-10,10,0.01)
y1 = np.sin(x)
y2 = np.cos(x)

plt.plot(x,y1,x,y2)

plt.xlabel("x-axis")
plt.ylabel("y-axis")
plt.title("Sin and Cos Curves")

plt.grid()
plt.show()