N=int(input())
while(N!=-1):
    X=[]
    for i in range(N):
        X.append(int(input()))
    sum=0
    for i in X:
        sum+=i
    if sum%len(X)==0:
        avg=sum//len(X)
        ans=0
        for i in X:
            if i>avg:
                ans+=(i-avg)
        print(ans)
    else:
        print(-1)
    N=int(input())    
