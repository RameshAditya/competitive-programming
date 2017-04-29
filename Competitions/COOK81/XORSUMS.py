#from itertools import *
#ti = input()
#assert (1 <= ti <= 5)
#for i in range (ti):
n = int(input())
arr = list(map(int,input().split(" ")))
t = 0
for i,j in enumerate(arr):
    if i%2 == 0:
        t^=j
print(t)
