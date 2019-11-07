import sys

n = int(sys.stdin.readline())

vals = list(map(int, sys.stdin.readline().split()))

print(sum([x for x in vals if x != -1])/(n - sum([1 for x in vals if x == -1])))