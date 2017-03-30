def pwr(x,n):
    res=1
    while(n):
        if n&1:
            res=(res*x)%(10**9 + 7)
        x=(x*x)%(10**9 + 7)
        n>>=1
    return res%(10**9+7)

T=int(input())
for t in range(T):
    n=int(input())
    print(pwr(2,n) - 1)

