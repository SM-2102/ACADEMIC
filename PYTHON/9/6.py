# pascal triangle of n rows

def fact(n):
    if(n==0):
        return 1
    return (n*fact(n-1))

def ncr(n,r):
   return int(fact(n)/(fact(n-r) *fact(r)))

n = int(input('Enter the number of rows : '))
for i in range(0,n):
    for j in range(0,n-i+1):
        print(" ",end='')
    for j in range(0,i+1):
        print(ncr(i,j),end=' ')
    print()
