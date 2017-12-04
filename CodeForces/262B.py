n,k=[int(i) for i in input().split(" ")]
A=[int(i) for i in input().split(" ")]

A.sort()
res=0
i=0
while A[i]<0 and i<n and k:
    A[i]*=-1
    k-=1
    i+=1

if k&1:
    A[n-1]*=-1
print(sum(A))
