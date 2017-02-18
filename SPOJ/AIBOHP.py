def lcs(A,B):
    n=len(A)
    m=len(B)
    dp=[[None for i in range(n+1)] for j in range(m+1)]
    for i in range(m+1):
        for j in range(n+1):
            if i==0 or j==0:
                dp[i][j]=0
            elif A[j-1]==B[i-1]:
                dp[i][j]=dp[i-1][j-1]+1
            else:
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])
    return dp[m][n]

T=int(input())
for t in range(T):
    s=input()
    maxlcs=lcs(s,s[::-1])
    print(len(s)-maxlcs)
    
