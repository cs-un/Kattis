import sys

print(sum(map(lambda e: float(e[0]) * float(e[1]), map(str.split, sys.stdin.readlines()[1:]))))