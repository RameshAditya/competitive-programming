def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)

def lcm(a,b):
    return a*b//gcd(a,b)

n,k=[int(i) for i in input().split(" ")]
print(lcm(n,10**k))
