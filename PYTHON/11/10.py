# find the longest word in file

with open('file1.txt','r') as file:
    data = file.read()
    longest = max(data.split(), key=len)
print(longest)