import sys
p = sys.stdin.readline()
lines = sys.stdin.readlines()
for line in lines:
	x = line.split()
	n = int(x[1])
	oddsum = n*n
	print(x[0] + " " + str(int((oddsum+n)/2)) + " " + str(oddsum) + " " + str((oddsum + n)))
