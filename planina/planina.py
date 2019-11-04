import sys

def fun(iter):
   if iter == 0:
      return 2
   return 2*fun(iter - 1) - 1

n = int(sys.stdin.readline())

print(pow(fun(n),2))