# accepts date of birth along with other personal details
# exception for invalid date

import datetime,sys

d,m,y=map(int,input("Enter date: ").split())
try:
	s=datetime.date(y,m,d)
except ValueError: 
	print("Date is invalid.")
	sys.exit()
name = input('Enter name : ')
print(d,m,y)
print(name)
