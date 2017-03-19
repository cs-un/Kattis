import sys

def calc(n, sum):
	if(n==0):
		return sum
	else:
		return calc(n - 1, 2*(sum + 0.5))

cases = int(sys.stdin.readline())
for _ in range(0,cases):
	stops = int(sys.stdin.readline())
	print(int(calc(stops, 0)))
