import sys
import copy

def propagate(units, unit, key):
	for (k,v) in unit.items():
		if(v == 1 or key == k or v == -1):
			continue
		for(n, m) in units[k].items():
			if(n == k or n == key or m >= 1 or m == -1):
				continue
			if(units[key][n] == -1):
				units[key][n] = v * m
				units[n][key] = 1/(v*m)

while(1):
	n = int(sys.stdin.readline())
	if n == 0:
		break
	x = sys.stdin.readline().split()
	units = {}
	base = {}
	for i in range(n):
		base[x[i]] = -1
	for i in range(n):
		units[x[i]] = copy.copy(base)
		units[x[i]][x[i]] = 1
	for i in range(n - 1):
		z = sys.stdin.readline().split()
		units[z[0]][z[3]] = float(z[2])
		units[z[3]][z[0]] = 1/float(z[2])
	for o in range(3):
		for i in range(n):
			propagate(units, units[x[i]], x[i])
	biggest = ''
	for i in range(n):
		b = True
		for y in range(n):
			b = b and (units[x[i]][x[y]] >= 1 or units[x[i]][x[y]] == -1)
		if(b):
			biggest = x[i]
			break
	res = '1' + x[i]
	for (k,v) in sorted(units[biggest].items(), key=lambda l: l[1]):
		if not k == biggest:
			res = res + ' = ' + str(round(v)) + str(k)
	print(res)