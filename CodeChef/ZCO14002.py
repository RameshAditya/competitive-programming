n = int(input())
A = [int(i) for i in input().split(" ")]
dp = [0]*n
for i in range(n):
    if i<3:
        dp[i] = A[i]
    else:
        dp[i] = A[i] + min(dp[i-1], dp[i-2], dp[i-3])

ans = dp[-1]
for i in range(max(0,n-3),n):
    ans = min(ans, dp[i])
print(ans)
