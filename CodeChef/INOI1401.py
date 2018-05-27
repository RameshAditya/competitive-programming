n, m, k = [int(i) for i in input().split(" ")]
A = []
for i in range(n):
    B = [int(i) for i in input().split(" ")]
    A.append(B)
dp = [[0 for i in range(m)] for j in range(n)]

for i in range(n):
    for j in range(m):
        if i==0 and j==0 and A[i][j]:
            dp[i][j]=1
        elif i==0 and A[i][j]:
            if j<=k:
                dp[i][j] = dp[i][j-1]
            else:
                dp[i][j] = max(0,dp[i][j-1] - dp[i][j-k-1])
        elif j==0 and A[i][j]:
            if i<=k:
                dp[i][j] = dp[i-1][j]
            else:
                dp[i][j] = max(0,dp[i-1][j] - dp[i-k-1][j])
        elif A[i][j]:
            if i<=k and j<=k:
                dp[i][j] = dp[i-1][j] + dp[i][j-1]
            elif i>k and j<=k:
                dp[i][j] = max(0,dp[i-1][j] - dp[i-k-1][j] + dp[i][j-1])
            elif i<=k and j>k:
                dp[i][j] = max(0,dp[i-1][j] + dp[i][j-1] - dp[i][j-k-1])
            elif i>k and j>k:
                dp[i][j] = max(0,dp[i-1][j] + dp[i][j-1] - dp[i-k-1][j] - dp[i][j-k-1])
        else:
            dp[i][j]=0

#print()
#for i in range(n):
    #print(*dp[i])
print(dp[n-1][m-1])
