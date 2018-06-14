import sys

maxi = 0
maxsum = 0

for i in range(1, 6):
	s = sum(map(int, sys.stdin.readline().split()))
	if(s > maxsum):
		maxsum = s
		maxi = i

print(str(maxi) + ' ' + str(maxsum))