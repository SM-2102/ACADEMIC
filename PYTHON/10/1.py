# returns the year and name of week day

from datetime import datetime

date = datetime.now()
print("Year :",date.year)
date.weekday()
print(date.date().strftime("%A"))