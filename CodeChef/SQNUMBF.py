def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)
T=int(input())
for t in range(T):
    n=int(input())
    A=[int(i) for i in input().split(" ")]
    res=2
    for i in range(n):
        for j in range(i+1,n):
            res=max(gcd(A[i],A[j]),res)
    print(res)
