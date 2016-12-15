def gcd(a,b):
    if max(a,b)%min(a,b)==0:
        return min(a,b)
    else:
        return gcd(b,a%b)

T=int(input())
for t in range(T):
    x,y=map(int,input().split(" "))
    print(gcd(x,y))
