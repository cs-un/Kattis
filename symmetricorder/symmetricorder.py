import sys

SET = 1
for line in sys.stdin:
	n = int(line)
	if(n==0):
		exit();
	names = []
	print("SET %s" %SET)
	for i in range(0, n):
		names.append(sys.stdin.readline().replace("\n", ""))
		if(i%2==0):
			print(names[i])
	for i in range(n-1, 0, -1):
		if(i%2==1):
			print(names[i])
	SET = SET + 1
