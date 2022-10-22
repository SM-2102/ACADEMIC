# copy content of one file into another after converting case

with open('file1.txt', "r") as fileone:
    with open('file4.txt', "w") as filetwo:
        for line in fileone:
            filetwo.write(line.swapcase())
