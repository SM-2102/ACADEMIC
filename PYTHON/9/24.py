# calculate the hypotenuse of right angled triangle

def hyp(a,b):
    return pow(a**2+b**2,0.5)

a, b=map(int,input('Enter the two sides : ').split())
print('The hypotenuse is',hyp(a,b))