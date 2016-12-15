def partition(A,l,u):
    i=l-1
    pivot=A[u]
    for j in range(l,u):
        if A[j]<=pivot:
            i+=1
            A[j],A[i]=A[i],A[j]
    A[i+1],A[u]=A[u],A[i+1]
    return i+1
def qs(A,l,u):
    if l<u:
        pi=partition(A,l,u)
        qs(A,l,pi-1)
        qs(A,pi+1,u)
    return A
n,d=map(int,input().split(" "))
A=[]
for i in range(n):
    A.append(int(input()))
qs(A,0,n-1)
ct=0
for i in range(0,n-1,2):
    if A[i+1]-A[i]<=d:
        ct+=1
print(ct)
