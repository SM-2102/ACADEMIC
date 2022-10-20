# print the words written in first line

readfile = open('files.txt','r')
lines = readfile.readlines()

for i in lines[0].split(' '):
    print(i)

readfile.close()