''' Create a dictionary which has at least 5 items
    Update any one of the item
    Add one more item
    Delete a particular item mentioning key value
    Delete the first item without mentioning key value
    Remove all items from the dictionary
    Delete the dictionary
    Create a dictionary with each item being a pair of a number and its square. Do it in single line
    Do the same as above only for odd numbers
    Print all items and keys of the dictionary
    Calculate the length of the dictionary
    Sort the items in the dictionary
    Create two dictionaries. Concatenate them
    Pop an element not present from the dictionary, provided a default value.
    Sort the items in frozen set. '''

dict = {1:'what',2:20,3:'nothing',4:40,5:50}
print(dict)

dict[3] = 'something'
print(dict)

dict[6] = 'added'
print(dict)

dict.pop(2)
print(dict)

for key in dict.keys():
    dict.pop(key)
    break
print(dict)

dict.clear()
print(dict)

del dict
print(dict)

dict={}
for i in range(1,10):
    dict[i] = i*i
print(dict)

dict.clear()
for i in range(1,10):
    if i % 2 !=0:
        dict[i]=i*i
print(dict)

for key,item in dict.items():
    print(key,'->',item)
    
print('The length : ',len(dict))

del dict
dict = {4:'this',1:'what',3:'is'}
for i in sorted(dict.keys()):
    print(i , dict[i])

dict2 = {7:'weird',1:'wow'}
dict3 = {**dict, **dict2}
print(dict3)

print(dict.pop(2,'Not Found'))

print(frozenset(dict))



