import math
t=int(input())
for t0 in range(t):
    ans=0
    n,k=map(int,input().split(" "))
    for n0 in range(n):
        s=input().split(" ")
        for x in s:
            x=int(x)
            ans+=min(abs(x-(x//k)*k),abs(x-math.ceil(x/k)*k))
    print(ans)
