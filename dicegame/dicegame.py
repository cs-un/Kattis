import sys

sums = []
for _ in range(0,2):
	line = sys.stdin.readline()
	ab = line.split()
	sum = 0
	for x in range(0, 3, 2):
		a = int(ab[x])
		b = int(ab[x + 1])
		div = 1/(b-a+1)
		for c in range(a, b+1):
			sum = sum + div * c
	sums.append(sum)
if(abs(sums[1] - sums[0]) < 1e-9): # floating point errors.
	print("Tie")
else:
	print("Gunnar" if sums[0] > sums[1] else "Emma")
