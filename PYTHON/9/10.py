# volume of box

def vol(lst):
    if not lst:
        return 0
    ans=1
    for i in lst:
        ans= ans*i
    return ans

lst =[]
print('Enter done to stop.')
for i in range(0,3):
    a = input('Enter : ')
    if a=='done':
        break
    lst.append(int(a))
print('The volume :',vol(lst))