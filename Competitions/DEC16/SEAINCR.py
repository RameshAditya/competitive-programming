def isincreasing(A,l,u):
    length=1
    lmax=1
    if l==u:
        return 1
    else:
        for i in range(l-1,u-1):
            if A[i]<A[i+1]:
                length+=1
            if lmax<length:
                lmax=length
            if A[i]>A[i+1]:
                length=1
        if lmax!=0:
            return lmax
        else:
            return 0
def inc(A,l,u):
    lis=[1]*(len(A))
    for i in range(l,u):
        for j in range(0,i-1):
            if A[i]>A[j] and lis[i]<lis[j]+1:
                lis[i]=1+lis[j]
    maximum=max(lis)
    return maximum+1
T=int(input())
n,m=map(int,input().split(" "))
A=list(map(int,input().split(" ")))
M=[]
for MM in range(m):
    l,u=map(int,input().split(" "))
    print(inc(A,l,u))


