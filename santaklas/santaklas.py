import sys
import math
x = sys.stdin.readline().split()
v = int(x[1])
if(v <= 180):
	print("safe")
else:
	print "%i" % math.floor(abs(int(x[0]) / math.sin(math.radians(v))))
	print("%i" %(math.floor(abs(int(x[0]) / math.sin(math.radians(v))))))