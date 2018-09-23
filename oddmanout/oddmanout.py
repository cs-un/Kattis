import sys

n = int(sys.stdin.readline())

for i in range(1, n+1):
	g = int(sys.stdin.readline())
	ids = sys.stdin.readline().split()
	ids.sort()
	for x in range(0, g, 2):
		if(x >= (g-1) or ids[x] != ids[x+1]):
			print("case #" + str(i) + ": " + str(ids[x]))
			break
