T=int(input())
dp=[0 for i in range(10**6+5)]
for i in range(2,10**6+5):
    k=dp[i-1]
    if i%2==0:
        k=min(k,dp[i//2])
    if i%3==0:
        k=min(k,dp[i//3])
    dp[i]=1+k
for t in range(T):
    x=int(input())
    print(dp[x])
