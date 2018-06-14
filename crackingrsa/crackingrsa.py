import sys

def inverse(a, n):
	t, r, newt, newr = 0, n, 1, a
	while(newr != 0):
		q = r // newr
		(t, newt) = (newt, t - q * newt)
		(r, newr) = (newr, r - q * newr)
	return t

N = int(sys.stdin.readline())

p = 0
q = 1

for _ in range(N):
	(n, e) = map(int, sys.stdin.readline().split())
	for i in range(2, 1001):
		if(n % i == 0):
			p = i
			q = n // p
			break

	phi = (p-1)*(q-1)
	print(inverse(e, phi) % phi)