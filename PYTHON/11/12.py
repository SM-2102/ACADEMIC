# square root of a number
# exception if negative

import math

num = input('Enter a number : ')
try:
    print('The square root is',math.sqrt(int(num)))
except ValueError:
    print('Error')