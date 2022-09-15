# print the number of subjects one likes

def func(sub):
    lst.append(sub)
    return lst

print("Enter 'done' to stop.")
lst=[]
while True:
    sub = input('Enter subject : ')
    if sub=='done':
        break
    func(sub)
print(lst)