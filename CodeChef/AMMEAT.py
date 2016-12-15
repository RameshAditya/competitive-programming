T=int(input())
for t in range(T):
    n,m=map(int,input().split(" "))
    A=list(map(int,input().split(" ")))
    A.sort(reverse=True)
    suma=0
    c=0
    f=0
    if sum(A)<m:
        print(-1)
        f=1
    if f==0:
        for i in range(len(A)):
            suma+=A[i]
            if suma>=m:
                c=i+1
                break
        print(c)
