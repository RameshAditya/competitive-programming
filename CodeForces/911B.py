n,a,b=[int(i) for i in input().split(" ")]
ans=1000000000
n-=n//a
n-=n//b
for i in range(1,a+1):
    for j in range(1,b+1):
        if (a*i)//n + (b*j)//n == n:
            ans=min(ans,i%n,j%n)
print(ans)
