n, m=[int(i) for i in input().split(" ")]
ans=100000
for i in range(n):
    x, y= [int(i) for i in input().split(" ")]
    ans=min(ans, m*(x/y))
print(ans)
