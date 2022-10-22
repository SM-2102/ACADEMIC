# check whether a file exists or not
# delete it

import os
   
path = 'D:/PROGRAMS/ACADEMIC/PYTHON/11/file1.txt'
isFile = os.path.isfile(path)
print('Does the file exists?',isFile)
os.remove('file1.txt')
