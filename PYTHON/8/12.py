# set of prime numbers and another set of odd numbers
# demonstrate the result of union, intersection, difference, and symmetric difference operations

prime = set()
odd = set()
for i in range(1,15):
    if i%2 != 0:
        odd.add(i)
    c=0
    for j in range(2,i//2 + 1):
        if(i%j==0):
            c=1
            break
    if(c==0):
            prime.add(i)
print('The union :',(odd | prime))
print('The intersection :',(odd & prime))
print('The difference :',(odd - prime))
print('The symmetric difference :',(odd ^ prime))


