import sys
x = int(sys.stdin.readline())
n = int(sys.stdin.readline())

mb = x * (1 + n)

while(n > 0):
	p = int(sys.stdin.readline())
	mb = mb - int(p)
	n = n - 1
print(mb)
