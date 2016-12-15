def part(A,l,u):
    i=l-1
    pivot=A[u]
    for j in range(l,u):
        if A[j]>=pivot:
            i+=1
            A[i],A[j]=A[j],A[i]
    A[i+1],A[u]=A[u],A[i+1]
    return i+1
def qs(A,l,u):
    if l<u:
        p=part(A,l,u)
        qs(A,l,p-1)
        qs(A,p+1,u)
    return A
for t in range(int(input())):
    n,k=map(int,input().split(" "))
    A=list(map(int,input().split(" ")))
    qs(A,0,n-1)
    d=max(k,n-k)
    print(sum(A[:d])-sum(A[d:]))
