import sys

_ = sys.stdin.readline()

for customers in sys.stdin:
   waits = [0]
   for _ in range(int(customers)):
      input = list(map(int, sys.stdin.readline().split()))
      waits.append(input[0] * sum(input[1:])/len(input[1:]))
   waits.sort()
   for i in range(1, len(waits)):
      waits[i] = waits[i - 1] + waits[i]
   print(sum(waits)/(len(waits) - 1))