# recursive and non-recursive to calculate the factorial

def recur_fact(n):
    if(n==0):
        return 1
    return (n*recur_fact(n-1))

def fact(n):
    f=1
    for i in range(1,n+1):
        f=f*i
    return f

n = int(input('Enter the number : '))
print('Factorial (recursive) :',recur_fact(n))
print('Factorial (iterative) :',fact(n))
