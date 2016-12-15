ct=0
def p(A,l,u):
    i=l-1
    pivot=A[u]
    global ct
    for j in range(l,u):
        if A[j]>=pivot:
            i+=1
            A[j],A[i]=A[i],A[j]
            ct+=1
    A[i+1],A[u]=A[u],A[i+1]
    return i+1
def qs(A,l,u):
    if l<u:
        pi=p(A,l,u)
        qs(A,l,pi-1)
        qs(A,pi+1,u)
    return A
T=int(input())
for t in range(T):
    ct=0
    n=int(input())
    s=input().split(" ")
    A=[]
    for i in s:
        if i.isdigit():
            A.append(int(i))
    qs(A,0,n-1)
    print("Case "+str(t+1)+":",ct)
