import sys
diff = int(sys.stdin.readline())
rita = int(sys.stdin.readline())
theo = int(sys.stdin.readline())
i = 0
tt = 0
rr = diff * 4 + sum(range(0,diff))
while(True):
	candles = rita - rr
	tt = tt + 3 + i
	if(candles == (tt - theo)):
		print(candles)
		break
	rr = rr + 4 + i + diff
	i = i + 1