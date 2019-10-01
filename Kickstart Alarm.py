def inv(x):
    mod = 10**9 + 7
    return pow(x, mod-2, mod)

def gp(a, r, n):
    mod = 10**9+7
    if r==1:
        return (a*n)%mod
    return ((((a%mod)*((pow(r, n, mod) - 1)%mod))%mod) * inv(r-1))%mod

T = int(input())
for t in range(T):
    n, k, x1, y1, c, d, e1, e2, f = [int(i) for i in input().split()]
    A = [0]*(n+1)
    A[1] = (x1+y1)%f
    for i in range(2, n+1):
        newx1 = (c*x1 + d*y1 + e1)%f
        newy1 = (d*x1 + c*y1 + e2)%f
        A[i] = (newx1+newy1)%f
        x1 = newx1
        y1 = newy1

    ans = 0

    mod = 10**9 + 7
    
    gps = [0]*(n+2)
    for i in range(1, n+2):
        gps[i] = gp(i, i, k)%(mod)

    for i in range(1, n+2):
        gps[i] = (gps[i]+gps[i-1])%mod

    for i in range(1, n+1):
        ans += (A[i]*(n-i+1)*(gps[i]))%(mod)
    
    print('Case #'+str(t+1)+': '+str(ans%(10**9+7)))
