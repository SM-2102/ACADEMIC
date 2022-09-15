# factor of a number

def fact(n):
    lst=[]
    for i in range(1,n+1):
        if n%i==0:
            lst.append(i)
    return lst

n = int(input('Enter the number : '))
print('The factors :',fact(n))