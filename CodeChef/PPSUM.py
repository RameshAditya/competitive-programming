def sum1(n):
    return n*(n+1)//2
def sum2(d,n):
    if d==1:
        return sum1(n)
    else:
        return sum1(sum2(d-1,n))
T=int(input())
for t in range(T):
    d,n=map(int,input().split(" "))
    print(sum2(d,n))
