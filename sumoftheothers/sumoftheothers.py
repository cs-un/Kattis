import sys

for line in sys.stdin:
    print(int(sum(map(int,line.split()))/2))