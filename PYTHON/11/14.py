# store the content of one file in another in reverse

with open('file1.txt','r') as files:
    d = files.read()
    data = d[::-1]
    with open('file2.txt','w') as file:
        file.write(data)
    
