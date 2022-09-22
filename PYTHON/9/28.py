# average, median, mode from 1 to n

def av(lst):
    return sum(lst)/len(lst)

def med(lst):
    length= len(lst)
    if length % 2 == 0:
        medi= (lst[n//2] + lst[n//2 - 1])/2
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
