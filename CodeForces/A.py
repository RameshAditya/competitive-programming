n=int(input())
A=[int(i) for i in input().split(" ")]
res=0
for i in range(1,n-1):
    res+= (A[i]>A[i-1] and A[i]>A[i+1]) or (A[i]<A[i+1] and A[i]<A[i-1])
print(res)
