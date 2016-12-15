T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    dp=[]
    for i in A:
        dp.append(i)
    if len(A)==1 or len(A)==2:
        ans=(max(A))
    else:
        for i in range(2,len(A)):
            for j in range(i-2,-1,-1):
                dp[i]=max(dp[i],A[i]+dp[j])
        ans=max(dp)
    print("Case "+str(t+1)+":",ans)
