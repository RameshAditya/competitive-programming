T=int(input())
for t in range(T):
    n,k=[int(i) for i in input().split(" ")]
    res=0
    for i in range(1,k+1):
        res=max(res, n%i)
    print(res)


