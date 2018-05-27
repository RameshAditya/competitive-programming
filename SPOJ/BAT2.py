dp = [[[0 for i in range(101)] for j in range(101)] for k in range(101)]
def f(cur, inc, dec):
    if cur==0:
        dp[cur][inc][dec] = 1+max(f(1,inc+1,dec), f(1,inc,dec+1))
        return dp[cur][inc][dec]
    if cur==len(A):
        return 0
    if A[cur]<A[inc]:
        dp[cur][inc][dec] = max(dp[cur][inc][dec], 1+f(cur+1, cur, dec))
    if A[cur]>A[dec]:
        dp[cur][inc][dec] = max(dp[cur][inc][dec], 1+f(cur+1, inc, cur))
    return dp[cur][inc][dec]

T = int(input())
for t in range(T):
    n = int(input())
    A = [int(i) for i in input().split(" ")]
    print(f(0,0,0))
