n=int(input())
A=[int(i) for i in input().split(" ")]
res=0
for i in A:
    res=max(res,A.count(i))
print(res)
