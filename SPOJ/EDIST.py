T=int(input())
for t in range(T):
    s1=input()
    s2=input()
    n=len(s1)
    m=len(s2)
    dp=[[0 for i in range(m+1)] for j in range(n+1)]
    for i in range(n+1):
        for j in range(m+1):
            if i==0:
                dp[i][j]=j
            elif j==0:
                dp[i][j]=i
            else:
                if s1[i-1]==s2[j-1]:
                    dp[i][j]=dp[i-1][j-1]
                else:
                    dp[i][j]=1+min(dp[i][j-1], dp[i-1][j-1], dp[i-1][j])
    print(dp[n][m])
