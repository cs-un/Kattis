import sys
import math
x = sys.stdin.readline().split()
goal = (int(x[1])-int(x[0]))*int(x[2]) + 1
y = math.ceil(goal/float(x[4]))
print(int(y + int(x[3])))
