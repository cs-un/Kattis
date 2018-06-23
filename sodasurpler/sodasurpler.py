import sys
import math

(e, f, c) = map(int, sys.stdin.readline().split())
bots = e + f
drunk = 0
while(bots/c >= 1):	
	drunk = drunk + math.floor(bots/c)
	bots = bots % c + math.floor(bots/c)
print(drunk)