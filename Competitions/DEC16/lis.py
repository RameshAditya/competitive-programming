def longest(A,l,u):
    n=len(A)
    lis=[1]*n
    for i in range(l,u):
        for j in range(l-1,i):
            if A[i]>A[j] and lis[i]<lis[j]+1:
                lis[i]=lis[j]+1
    maximum=max(lis)
    return maximum
T=int(input())
for t in range(T):
    n,m=map(int,input().split(" "))
    A=list(map(int,input().split(" ")))
    for m1 in range(m):
        l,u=map(int,input().split(" "))
        print(longest(A,l,u))
