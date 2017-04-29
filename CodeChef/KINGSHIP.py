T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    mini=10000
    mini=min(A)
    ind=A.index(mini)
    res=0
    for i in A:
        if A.index(i)!=ind:
            res+=abs(i*mini)
    print(res)
