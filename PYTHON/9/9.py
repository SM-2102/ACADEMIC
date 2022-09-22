# mathematical functions (+,-,*,/,^)

def add():
    return (a+b)

def sub():
    return (a-b)

def mul():
    return (a*b)

def div():
    return (a/b)

def exp():
    return (a**b)

print("Enter 'done' to stop.")
a,b = map(int,input('Enter two numbers : ').split())
while True:
    o = input('Enter the operation : ')
    dict={'+':add(),'-':sub(),'*':mul(),'/':div(),'^':exp()}
    if o in dict.keys():
        print(dict[o])
    else:
        break