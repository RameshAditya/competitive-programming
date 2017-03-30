T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    noz=0
    ans=0
    for i in A:
        if i==0:
            noz+=1
            ans+=1100
        if i==1:
            if noz>0:
                ans+=100
                noz-=1
    print(ans)
