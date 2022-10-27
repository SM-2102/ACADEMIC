# count the number of words in file

with open('file1.txt','r') as file:
    data = file.read()
    lines = data.split()
    words=len(lines)
print('The number of words :',words)