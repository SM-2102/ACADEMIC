# plot using piechart

from matplotlib import pyplot as plt
import numpy as np

cars = ['AUDI', 'BMW', 'FORD',
		'TESLA', 'JAGUAR', 'MERCEDES']

data = [23, 17, 35, 29, 12, 41]

plt.pie(data, labels = cars)
plt.show()

