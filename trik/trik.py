import sys

moves = sys.stdin.readline()

pos = 1

for move in moves:
	if(move == 'A'):
		pos = 1 if pos == 2 else (2 if pos == 1 else 3)
	elif(move == 'B'):
		pos = 3 if pos == 2 else (2 if pos == 3 else 1)
	elif(move == 'C'):
		pos = 1 if pos == 3 else (3 if pos == 1 else 2)

print(pos)