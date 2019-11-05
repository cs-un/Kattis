import sys

a = int(sys.stdin.readline())
b = int(sys.stdin.readline())

m = max(a, b)
mul = 1 if a == m else -1

if abs(a - b) > 180:
   dist = mul * (360 - a*mul + b*mul)
else:
   dist = -mul * (a*mul - b*mul)


print(dist if dist != -180 else 180)
