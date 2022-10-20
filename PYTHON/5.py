# check whether a file exists or not
# delete it

import os
   
path = 'C:/37/ACADEMIC/PYTHON/11/file.txt'
isFile = os.path.isfile(path)
print('Does the file exists? ',isFile)
os.remove('file.txt')
