# square root of a number

def sqrtnum(n):
    sqrt = n/2
    temp = 0
    while(sqrt != temp):
        temp = sqrt
        sqrt = (n/temp + temp) / 2
    return sqrt

n = int(input('Enter the number : '))
print('Square root :',sqrtnum(n))