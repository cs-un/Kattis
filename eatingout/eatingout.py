import sys

vals = list(map(int, sys.stdin.readline().split()))

print("Possible" if 2*vals[0] >= sum(vals[1:4]) else "Impossible")