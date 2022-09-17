# area of triangle

def area(a,b,c):
    s = (a+b+c)/2
    return pow(s*(s-a)*(s-b)*(s-c),0.5)

a, b, c = map(int, input('Enter the 3 sides : ').split())
print('The area is',area(a,b,c))