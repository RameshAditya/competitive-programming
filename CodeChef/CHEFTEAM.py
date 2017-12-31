def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)

T=int(input())
for t in range(T):
    n,k=map(int,input().split())
    C=n
    for i in range(1,k+1):
        d=gcd(C,i)
        C*=(n-i+1)//(i//d)
        C=C//d
    print(C//n)
