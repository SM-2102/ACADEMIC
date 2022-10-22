# copy content of one file into another character by character

with open('file1.txt', "r") as fileone:
    with open('file3.txt', "w") as filetwo:
        for line in fileone:
            for i in line:
                filetwo.write(i)