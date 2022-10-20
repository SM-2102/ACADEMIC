# write a file 
# read file and print its contents
# read first two lines
# read first 5 characters

writefile = open('file.txt','w')
writefile.write('Some are born to Sweet Delight\n')
writefile.write('Some are born to Endless Night\n')
writefile.write('\t\t-Willian Blake\n')
writefile.close()

readfile = open('file.txt','r')
data = readfile.read()
print(data)
readfile.seek(0)

lines = readfile.readlines()
for i in range(2):
    print(lines[i],end='')
readfile.seek(0)

data = readfile.read()
for i in range(5):
    print(data[i])
readfile.close()

