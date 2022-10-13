# random module, frequency of occurence of each faces for rolling a dice 6000 times

import random

dict = {1:0,2:0,3:0,4:0,5:0,6:0}
for roll in range(1,6001): 
    face = random.randrange(1,7)
    for key,value in dict.items():
        if face==key:
            dict[key] = value+1
    

for key,value in dict.items():
    print(key,'->',value)