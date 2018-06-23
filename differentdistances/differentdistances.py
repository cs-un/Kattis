import sys

r = list(map(float, sys.stdin.readline().split()))
while(len(r) == 5):
	res = (abs(r[0] - r[2])**r[4] + abs(r[1] - r[3])**r[4])**(1/r[4])
	print(res)
	r = list(map(float, sys.stdin.readline().split()))