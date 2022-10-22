# square of a number
# exception if character is entered

import math

num = input('Enter a number : ')
try:
    n = int(num)
    print('The square is',math.pow(n,2))
except:
    print('Error')