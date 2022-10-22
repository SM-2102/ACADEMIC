# plot using lines

import matplotlib.pyplot as plt

x1 = [2, 4, 6, 8]
y1 = [3, 5, 7, 9]

plt.plot(x1, y1, '-.')

plt.xlabel("X-axis")
plt.ylabel("Y-axis")
plt.title('Plot using lines')
plt.show()