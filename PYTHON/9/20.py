# prime number or not

from pickle import FALSE


def prime(n):
    c=0
    for i in range(2,n//2 + 1):
        if(n%i==0):
            c=1
            break
    return c

num = int(input('Enter a number : '))
if prime(num)==0:
    print('It is a prime number.')
else:
    print('It is not a prime number.')