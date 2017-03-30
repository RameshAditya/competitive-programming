T=int(input())
for t in range(T):
    n=int(input())
    a=list(map(int,input().split(" ")))
    ct=2**n
    ans=0
    x=1
    y=x
    for i in range(1,n+1):
        y=x
        j=0
        while(y>0):
            j+=1
            #print(ct,'*A[',i,']*A[',i-j,']')
            ans+=ct*a[i]*a[i-j]
            #j+=1
            y-=1
        x+=1
        ct//=2
    print(ans%(10**9+7))
