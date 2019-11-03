import sys
import math

def distance(x1, y1, x2, y2):
   return math.sqrt(pow((x2-x1), 2) + pow((y2-y1), 2))

def numUnions(missing, depth):
   if(len(missing) == 0):
      return depth
   res = 99999
   for x in range(n):
      for z in missing:
         if z in craneCover[x] and missing - {z} in craneCover:
            depth += 2
            return depth
            break
         if z in craneCover[x]:
            res = min(numUnions(missing - {z}, depth + 1), res)
   return res

(l, w, n, r) = map(int, sys.stdin.readline().split())

wallCenters = [(-l/2, 0), (l/2, 0), (0, -w/2), (0, w/2)]
centers = {0, 1, 2, 3}
craneCover = []

for _ in range(n):
   (x, y) = map(int, sys.stdin.readline().split())
   cover = set()
   for i in range(4):
      if distance(wallCenters[i][0], wallCenters[i][1], x, y) <= r:
         cover.add(i)
   craneCover.append(cover)

bestCount = 99999

for i in range(n):
   cover = craneCover[i]
   missing = centers - cover
   if len(missing) == 0:
      bestCount = 1
      break
   if missing in craneCover:
      bestCount = 2
      break
   for x in range(n):
      if missing in craneCover[x]:
         bestCount = 2
         break
   bestCount = min(1 + numUnions(missing, 0), bestCount)

print(bestCount if bestCount != 99999 else "Impossible")