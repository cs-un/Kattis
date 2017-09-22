import sys
n = int(sys.stdin.readline())
for _ in range(n):
	a = sys.stdin.readline().split()
	if(int(a[0]) is not (int(a[1]) - int(a[2]))):
		print("advertise" if (int(a[0]) < (int(a[1]) - int(a[2]))) else "do not advertise")
	else:
		print("does not matter")
