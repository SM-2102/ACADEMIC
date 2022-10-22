# count the number of words in file

words=0
with open('file1.txt','r') as file:
    data = file.read()
    lines = data.split()
    words= words+ len(lines)
print('The number of words :',words)