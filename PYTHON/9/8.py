# gcd of n numbers

def gcd(a,b):
    if a%b==0:
        return b
    return gcd(b, a%b)

lst =[]
print('Enter -1 to stop.')
while True:
    a = int(input('Enter number : '))
    if a==-1:
        break
    lst.append(a)
gcdd = gcd(lst[0],lst[1])
for i in range(2,len(lst)):
    ans = gcd(gcdd,lst[i])
print('The GCD :',ans)
