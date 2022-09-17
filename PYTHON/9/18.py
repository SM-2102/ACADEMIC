# max and min of three numbers

def max_min(lst):
    ma = lst[0]
    mi = lst[0]
    for i in range(1,len(lst)):
        if lst[i]>ma:
            ma=lst[i]
        if lst[i]<mi:
            mi=lst[i]
    return ma, mi

lst = list(map(int, input('Enter 3 numbers : ').split()))
print('Maximum and minumum :', max_min(lst))
