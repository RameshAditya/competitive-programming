dp = [0 for i in range(4001)]

n, a, b, c = [int(i) for i in input().split(" ")]

dp[0] = 0

s=0
if s==0:
    for i in range(s+a, 4001, a):
        dp[i] = max(dp[i-a] + 1, dp[i])
    for i in range(s+b, 4001, b):
        dp[i] = max(dp[i-b] + 1, dp[i])
    for i in range(s+c, 4001, c):
        dp[i] = max(dp[i-c] + 1, dp[i])

print(dp[n])
