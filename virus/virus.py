import sys
seq1 = sys.stdin.readline()
seq2 = sys.stdin.readline()

start = 0
end = 1

minLength = min(len(seq1), len(seq2))

while(start < minLength and seq1[start] is seq2[start]):
	start = start + 1

while(end < minLength and seq1[-end] is seq2[-end]):
	end = end + 1

inserted = max(len(seq2) - min(start + end - 1, len(seq1)), 0)

print(inserted)