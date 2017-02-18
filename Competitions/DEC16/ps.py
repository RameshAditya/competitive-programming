def ps(A):
    powerset=[]
    for i in range(len(A)):
        for j in range(len(A)):
            for k in range(j+1):
                powerset.append(A[k:j+i])
    B=[]
    for i in powerset:
        if i not in B and len(i)!=0:
            B.append(i)
    return B
def p(pst,l,u):
    i=l-1
    pivot=pst[u]
    for j in range(l,u):
        if compare(pst[j],pivot)<=0:
            i+=1
            pst[i],pst[j]=pst[j],pst[i]
    pst[i+1],pst[u]=pst[u],pst[i+1]
    return i+1
def sort(pst,l,u):
    if l<u:
        pi=p(pst,l,u)
        sort(pst,l,pi-1)
        sort(pst,pi+1,u)
    return pst
def compare(B,C):
    for i in range(n-len(B)):
        B.append(0)
    for i in range(n-len(C)):
        C.append(0)
    for i in range(n):
        if B[i]>C[i]:
            return 1
            break
        elif B[i]<C[i]:
            return -1
            break
        else:
            return 0
T=int(input())
for t in range(T):
    n,m=map(int,input().split(" "))
    A=list(map(int,input().split(" ")))
    pst=ps(A)
    sort(pst,0,len(pst)-1)
    pst=pst[::-1]
    for M in range(m):
        mx=int(input())
        print(max(pst[mx-1]))
