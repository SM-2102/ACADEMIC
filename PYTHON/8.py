# count the number of lines in file

readfile = open('file.txt','r')
lines = readfile.readlines()
print("The number of lines :",len(lines))
readfile.close()