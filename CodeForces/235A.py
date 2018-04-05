def gcd(x,y):
    if y==0:
        return x
    return gcd(y,x%y)


def lcm(x,y):
    return (x*y)//gcd(x,y)

n = int(input())
res = 0
for i in range(max(1, n-50), n+1):
    for j in range(max(1, n-50), n+1):
        if gcd(i,j)==1:
            for k in range(max(1, n-50), n+1):
            #print(i)
                if lcm(lcm(i,(j)),(k))>res and i!=j and j!=k and i!=k:
                    #print(i,j,k)
                    res = max(res, lcm(lcm(i,(j)),(k)))
                    #print(res)
if n==1 or n==2:
    print(n)
else:
    print(res)
