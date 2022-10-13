# print current date and time in format :
# year : yyyy
# month : mm
# day : dd
# time : hh:mm:ss
# date and time : mm/dd/yy, hh:mm:ss 

from datetime import datetime

now = datetime.now()
print('year :',now.strftime("%Y"))
print('month :',now.strftime("%m"))
print('day :',now.strftime("%d"))
print('time :',now.strftime("%H:%M:%S"))
print('date and time :',now.strftime("%m/%d/%Y %H:%M:%S"))