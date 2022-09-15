# check whether a leap year or not

def leap(year):
    if year%4!=0:
        return 0
    else:
        if year%100==0 and year%400!=0:
            return 0
        else:
            return 1

year = int(input('Enter the year : '))
if leap(year) == 0:
    print("It is not a leap year.")
else:
    print("It is a leap year.")  