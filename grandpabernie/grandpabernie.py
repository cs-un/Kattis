import sys

n = int(sys.stdin.readline())

country = {}

for _ in range(n):
	x = sys.stdin.readline().split()
	if(x[0] in country):
		country[x[0]].append(int(x[1]))
	else:
		country[x[0]] = [int(x[1])]

for (k,v) in country.items():
	country[k] = sorted(v)

q = int(sys.stdin.readline())

for _ in range(q):
	x = sys.stdin.readline().split()
	print(country[x[0]][int(x[1]) - 1])
