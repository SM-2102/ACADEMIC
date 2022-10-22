# plot using histogram

import matplotlib.pyplot as plt
import numpy as np

x = np.arange(5)
plt.bar(x, height=[3,2,3,1,5])
plt.xticks(x, ['a','b','c','d','e']);
plt.xlabel("X-axis")
plt.ylabel("Y-axis")
plt.show()
