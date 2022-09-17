# average, median, mode from 1 to n

from statistics import median


def av(lst):
    length=len(lst)
    return sum(lst)/len(lst)

def med(lst):
    length= len(lst)
    if length % 2 == 0:
        med1 = lst[n//2]
        med2 = lst[n//2 - 1]
        medi= (med1 + med2)/2
    else:
        medi = lst[n//2]
    return medi

def mod(lst):
    freq={}
    for n in lst:
        freq.setdefault(n,0)
        freq[n]+=1
    high=max(freq.values())
    highlst=[]
    for n, f in freq.items():
        if f == high:
            highlst.append(n)
    return highlst

n = int(input('Enter the value of n : '))
lst=[]
for i in range(1,n+1):
    lst.append(i)
print('Average :',av(lst))
print('Median :',med(lst))
print('Mode :',mod(lst))
