# find the longest word in file

with open('files.txt','r') as file:
    data = file.read()
    longest = max(data.split(), key=len)
print(longest)