# dictionary of names of students and a list of their marks in 4 subjects
# create another dictionary from this dictionary that has name of the students and their total marks
# find out the topper and his/her score

dict = {'Aranya' : [10,10,10,9],'Koyena' : [10,10,10,10],'Dipan':[10,10,10,8]}
dict2 = {}
for key,value in dict.items():
    dict2[key] = sum(value)
maxi = max(dict2.values())
for key,value in dict2.items():
    if value == maxi:
        print('The topper is',key,'with',maxi,'marks.')
