# print the month name and its first monday (in a given year)

import datetime
  
def first_monday(year, month):
    day = (8 - datetime.date(year, month, 1).weekday()) % 7
    return datetime.date(year, month, day)

print(first_monday(2022,10))