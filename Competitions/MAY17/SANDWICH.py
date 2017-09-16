import math
def C(n,k):
    return fac[n]//(fac[k]*fac[n-k])%(10**9+7)
fac=[1 for i in range(51)]
for i in range(2,51):
    fac[i]=(fac[i-1]*i)%(10**9+7)
T=int(input())
for t in range(T):
    n,k,m=map(int,input().split(" "))
    r=int(math.ceil(n/k))
    print(r,end=' ')
    print(C(n-1,r-2)%m)
