# volume of box

def vol(lst):
    for i in lst:
        ans= ans*i
    return ans

lst =[]
lst = list(map(int,input("Enter the dimensions : ").split()))
print('The volume :',vol(lst))