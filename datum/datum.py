import datetime
import calendar
import sys
x = sys.stdin.readline().split()
print(calendar.day_name[datetime.datetime(2009, int(x[1]), int(x[0])).weekday()])