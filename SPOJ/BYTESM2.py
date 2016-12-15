T=int(input())
for t in range(T):
    h,w=map(int,input().split(" "))
    A=[]
    for i in range(h):
        temp=list(map(int,input().split(" ")))
        A.append(temp)
    dp=[]
    for i in range(h):
        dpt=[]
        for j in range(w):
            dpt.append(0)
        dp.append(dpt)
    for i in range(w):
        dp[0][i]=A[0][i]
    for i in range(1,h):
        for j in range(w):
            if j==0:
                dp[i][j]+=max(dp[i-1][j],dp[i-1][j+1])+A[i][j]
            elif j==w-1:
                dp[i][j]+=max(dp[i-1][j],dp[i-1][j-1])+A[i][j]
            else:
                dp[i][j]+=max(dp[i-1][j-1],dp[i-1][j],dp[i-1][j+1])+A[i][j]
    ans=0
    for i in dp:
        print(i)
    for i in range(w):
        if dp[h-1][i]>ans:
            ans=dp[h-1][i]
    print(ans)
