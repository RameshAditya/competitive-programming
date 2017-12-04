n,x=[int(i) for i in input().split(" ")]
A=[int(i) for i in input().split(" ")]

A.sort()
res=0
for i in range(n):
    res+=x*A[i]
    x-=1
    x=max(x,1)
print(res)
