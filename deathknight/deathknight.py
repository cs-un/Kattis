import sys
import re
sys.stdin.readline()
x = 0
for line in sys.stdin:
	if(not re.match(r'.*CD.*',line)):
		x = x + 1
print(x)