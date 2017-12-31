n=int(input())
A=[int(i) for i in input().split(" ")]
x=min(A)
ans=n
for i in range(n):
    if A[i]==x:
        j=1
        while i+j<n and A[i+j]!=x:
            j+=1
        if i+j<n and A[i+j]==x:
            ans=min(ans, j)
print(ans)
