n=int(input())
A=[int(i) for i in input().split(" ")]
ans=n
last=n+1
for i in range(n-1,-1,-1):
    if max(0,i-A[i])<last:
        last=i-A[i]
        ans-=min(i,A[i])
        #print(i)
print(ans)    
