# print a given datetime

from datetime import datetime

now = datetime.now()
print(now)
print(now.strftime("%d/%m/%Y %H:%M:%S"))