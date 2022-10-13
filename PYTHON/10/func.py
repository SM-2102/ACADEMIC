def Fa(x,y):
    if (y<=x):
        return Fa(x-y,y)+1
    else:
        return 0

def Fb(n,r):
    if (n==0 or r==0):
        return 1
    else:
        return (Fb(n-1,r)+Fb(n-1,r-1))

def Fc(n):
    if n>1:
        return Fc(n/2)+1
    else:
        return 0

def Fd(m,n):
    if m==0 or m>=n>=1:
        return 1
    else:
        return Fd(m-1,n)+Fd(m-1,n-1)

def fact(n):
    if(n==0):
        return 1
    return (n*fact(n-1))

def Fe(m,x):
    if x==0:
        return 1
    if m>x:
        return fact(m)/(fact(x)*(fact(m-x)))
    return Fe(m,x-1)*((m-x+1)/x) 