from math import sqrt
def phi(n):
    res=n
    for i in range(2,int(sqrt(n))+1):
        if n%i==0:
            while n%i==0:
                n=n//i
            res-=res//i
    if n>1:
        res-=res//n
    return res

T=int(input())
for t in range(T):
    print(phi(int(input())))
