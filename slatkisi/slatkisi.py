import sys
x = sys.stdin.readline().split()
remainder = int(x[0]) % 10**int(x[1])
if(remainder >= 0.5*10**int(x[1])):
	print(int(x[0]) - remainder + 10**int(x[1]))
else:
	print(int(x[0]) - remainder)