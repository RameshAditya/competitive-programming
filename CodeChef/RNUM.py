import math
T=int(input())
for t in range(T):
    n=int(input())
    A=[int(i) for i in input().split(" ")]
    print(math.ceil(n/3), math.ceil(n/2))
