T=int(input())
dp=[1 for i in range(2001)]
for i in range(1,2001):
    dp[i]=dp[i-1]*i
dp[0]=1
def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)
def catalanDP(n):
    if (n == 0 or n == 1):
        return 1
    catalan = [0 for i in range(n + 1)]
    catalan[0] = 1
    catalan[1] = 1
    for i in range(2, n + 1):
        catalan[i] = 0
        for j in range(i):
            catalan[i] = catalan[i] + catalan[j] * catalan[i-j-1]
    return catalan[n]
for t in range(T):
    n=int(input())
    res=dp[n-1]
    if n==1:
        print(0,0)
    else:
        print(dp[n-1]//gcd(dp[n-1],catalanDP(n-1)),catalanDP(n-1)//gcd(dp[n-1],catalanDP(n-1)))
