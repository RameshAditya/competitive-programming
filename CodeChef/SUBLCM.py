def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)

T=int(input())
for t in range(T):
    n=int(input())
    A=[int(i) for i in input().split(" ")]
    g=A[0]
    
