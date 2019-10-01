import sys

_ = sys.stdin.readline()

vals = map(int, sys.stdin.readline().split())

expenses = 0

for v in vals:
	if(v < 0):
		expenses = expenses + v

print(abs(expenses))