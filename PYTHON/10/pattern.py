def a(n):
    for i in range(1,n+1):
        for _ in range(i):
            print("* ",end='')
        print()

def b(n):
    for i in range(1,n+1):
        for _ in range(n-i):
            print(" ",end='')
        for _ in range(i):
            print("* ",end='')
        print()

def c(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(j,end=' ')
        print()

def d(n):
    k=1
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(k,end=' ')
            k=k+1
        print()