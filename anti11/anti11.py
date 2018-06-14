import sys

T = int(sys.stdin.readline())

limit = 10**9 + 7

fib = [0] * 100001
fib[0] = 1
fib[1] = 2

for i in range(2, 100001):
	fib[i] = (fib[i - 1] + fib[i - 2]) % limit

fib[0] = 0
for _ in range(T):
	n = int(sys.stdin.readline())
	print(fib[n])