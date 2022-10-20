# count the number of lines in file

words=0
with open('file.txt','r') as file:
    data = file.read()
    lines = data.split()
    words= words+ len(lines)
print('The number of words :',words)