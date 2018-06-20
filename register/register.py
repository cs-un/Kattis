import sys

p = [2, 3, 5, 7, 11, 13, 17, 19]
r = list(map(int, sys.stdin.readline().split()))
prod = 1
s = 0
for i in range(0, len(p)):
	s = s + prod * r[i]
	prod = prod * p[i]
print(prod - s - 1)