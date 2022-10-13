# display the name of the month

from datetime import date
import calendar
  
mon =date.today().month
print( calendar.month_name[mon])