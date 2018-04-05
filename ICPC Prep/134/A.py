#hello
n=int(input())
A=[int(i) for i in input().split(" ")]

res=0
ans=[]

avg=sum(A)/n

for i in range(n):
    if A[i]==avg:
        res+=1
        ans.append(i+1)
print(res)
print(*ans)
