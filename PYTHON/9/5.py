# recursive and non - recursive to print the fibonacci series

def fib(n):
    lst=[0,1]
    a=0
    b=1
    for _ in range(3,n+1):
        c=a+b
        a=b
        b=c
        lst.append(c)
    return lst

def recur(n):
    if(n==0):
        return 0
    elif(n==1):
        return 1
    else:
        return (recur(n-1)+recur(n-2))

n = int(input('Enter the number : '))
lsti=[]
for i in range(0,n):
    lsti.append(recur(i))
print('Fibonacci (recursive) :',lsti)
print('Fibonacci (iterative) :',fib(n))