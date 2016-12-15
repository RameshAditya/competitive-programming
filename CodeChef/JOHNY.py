def pivot(A,l,u):
    i=l-1
    pivot=A[u]
    for j in range(l,u):
        if A[j]<=pivot:
            i+=1
            A[i],A[j]=A[j],A[i]
    A[i+1],A[u]=A[u],A[i+1]
    return i+1
def quicksort(A,l,u):
    if l<u:
        pi=pivot(A,l,u)
        quicksort(A,l,pi-1)
        quicksort(A,pi+1,u)
    return A
T=int(input())
for t in range(T):
    n=int(input())
    A=[]
    s=input().split(" ")
    k=int(input())
    for i in s:
        if i.isdigit():
            A.append(int(i))
    val=int(A[k-1])
    quicksort(A,0,n-1)
    print(A.index(val)+1)
