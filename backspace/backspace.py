import sys
s = sys.stdin.readline()[::-1]
so = ''
a = 0
for c in range(len(s)):
	if(s[c] == "<"):
		a = a + 1
	elif(a > 0):
		a = a - 1
	else:
		so = so + s[c]
print(so[::-1])
