import sys

def generateSolutions():
   vals = {}
   OpToChar = {0: '*', 1: "+", 2: "-", 3: "//"}
   OpToOutputChar = {0: '*', 1: "+", 2: "-", 3: "/"}

   for i in range(4):
      for x in range(4):
         for z in range(4):
            sum = eval(f'4 {OpToChar[i]} 4 {OpToChar[x]} 4 {OpToChar[z]} 4')
            if sum not in vals:
               vals[sum] = f'4 {OpToOutputChar[i]} 4 {OpToOutputChar[x]} 4 {OpToOutputChar[z]} 4 = {int(sum)}'
   return vals

_ = sys.stdin.readline()

possibleValues = generateSolutions()

for target in sys.stdin:
   val = int(target)
   if val in possibleValues:
      print(possibleValues[val])
   else:
      print("no solution")