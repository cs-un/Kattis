import sys

def substr(name):
	return name[:2]

while(1):
	n = int(sys.stdin.readline())
	if(n == 0):
		break
	names = []
	for _ in range(n):
		names.append(sys.stdin.readline())
	names = sorted(names, key=substr)
	for i in range(n):
		print(names[i], end='')
	print()