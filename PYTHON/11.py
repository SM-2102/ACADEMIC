# accepts date of birth along with other personal details
# exception for invalid date

import datetime,sys

d,m,y=map(int,input("Enter date: ").split())
name = input('Enter name : ')

try:
	s=datetime.date(y,m,d)
	print("Date is valid.")
except ValueError: 
	print("Date is invalid.")
    quit()

print(d,m,y)
print(name)
