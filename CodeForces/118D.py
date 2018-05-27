n1, n2, k1, k2 = [int(i) for i in input().split(" ")]
#print(brute(0,0,1,0) + brute(0,0,2,0))
dp = [[[0 for j in range(2)] for i in range(n2+1)] for k in range(n1+1)]

dp[0][0][0] = 1
dp[0][0][1] = 1
for i in range(n1+1):
    for j in range(n2+1):
        for k in range(1,min(n1,k1)+1):
            dp[i][j][1] += (dp[i-k][j][0])
        for k in range(1,min(n2,k2)+1):
            dp[i][j][0] += (dp[i][j-k][1])
        for k in range(2):
            dp[i][j][k] %= 10**8
            
print((dp[n1][n2][0] + dp[n1][n2][1])%10**8)
