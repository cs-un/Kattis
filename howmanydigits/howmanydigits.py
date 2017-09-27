import sys
import math
digits = [0] * (10**6 + 1)
digits[0] = 1
maxi = 1
lines = sys.stdin.readlines()
for n in lines:
	n = int(n)
	if(digits[n] is 0):
		i = maxi
		while(i < n+1):
			digits[i] = digits[i - 1] + math.log10(i)
			i = i + 1
		maxi = i
	print(math.floor(digits[n]))