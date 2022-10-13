# check whether a year is leap year or not
# find the number of leap years in a range of years

import calendar

print("2000 is a leap year :",calendar.isleap(2000))
print("2002 is a leap year :",calendar.isleap(2002))

leap=0
for i in range(1980,2030):
    if calendar.isleap(i):
        leap=leap+1
print("The number of leap years between 1980 and 2030 is",leap)