# plot using lines

import matplotlib.pyplot as plt

x1 = [10,100,1000,10000,20000,50000,100000]
y1 = [0.000004,0.000100,0.005532,0.215739,0.872469,5.837247,23.690922]

plt.plot(x1, y1, '-')

plt.xlabel("X-axis")
plt.ylabel("Y-axis")
plt.title('Plot using lines')
plt.show()