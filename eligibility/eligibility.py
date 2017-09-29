import sys
import math
for _ in range(int(sys.stdin.readline())):
	x = sys.stdin.readline().split()
	sys.stdout.write(x[0] + " ")
	if(x[1].split('/')[0] >= '2010' or x[2].split('/')[0] >= '1991'):
		print('eligible')
	elif(int(x[3]) >=41):
		print('ineligible')
	else:
		print('coach petitions')