def knapsack(W,wt,val,n):
    check=[[0 for x in range(W+1)] for y in range(n+1)]
    dp=[[0 for x in range(W+1)] for y in range(n+1)]
    for i in range(n+1):
        for j in range(W+1):
            if i==0 or j==0:
                dp[i][j]=0
            elif wt[i-1]<=j:
                dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j])
            else:
                dp[i][j]=dp[i-1][j]
    finalval=dp[n][W]
    K=-1
    for i in range(1,W+1):
        if(dp[n][i]==dp[n][W]):
            K=i
            break
    return [K,finalval]

W,n=map(int,input().split(" "))
while W!=0 or n!=0:
    wt=[]
    val=[]
    for wn in range(n):
        x,y=map(int,input().split(" "))
        wt.append(x)
        val.append(y)
    a,b=(knapsack(W,wt,val,n))
    print(a,b)
    blank=input()
    W,n=map(int,input().split(" "))
