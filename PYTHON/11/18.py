# merge the content of two files

with open('file1.txt','r') as fileone:
    with open('file2.txt','a') as filetwo:
        for line in fileone:
            filetwo.write(line)
