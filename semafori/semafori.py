import sys

(n, l) = map(int, sys.stdin.readline().split())
time = 0
last_d = 0
for i in range(n):
    (_d, _r, _g) = map(int, sys.stdin.readline().split())
    time = time + _d - last_d
    if time % (_r + _g) < _r:
        time = time + (_r - time % (_r + _g))
    last_d = _d
time = time + l - last_d
print(time)