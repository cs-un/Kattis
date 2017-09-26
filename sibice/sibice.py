import sys
x = sys.stdin.readline().split()
max_length = int(x[1])**2 + int(x[2])**2
for _ in range(int(x[0])):
	print ("DA" if int(sys.stdin.readline())**2 <= max_length else "NE") 