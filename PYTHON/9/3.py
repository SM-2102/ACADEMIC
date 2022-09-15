# lcm of n numbers

def lcmp(lst):
    lcm = lst[0]
    gcd = lst[0]
    for i in range(1,len(lst)):
        gcd = gcdi(lst[i], lcm)
        lcm = (lcm*lst[i])/gcd
    return lcm

def gcdi(a,b):
    if a%b==0:
        return b
    return gcdi(b, a%b)

lst =[]
print('Enter -1 to stop.')
while True:
    a = int(input('Enter number : '))
    if a==-1:
        break
    lst.append(a)
print('The LCM is',lcmp(lst))