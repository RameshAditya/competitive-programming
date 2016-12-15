def partition(A,l,u):
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
        pi=partition(A,l,u)
        quicksort(A,l,pi-1)
        quicksort(A,pi+1,u)
    return A
T=int(input())
for t in range(T):
    n=int(input())
    A=input().split(" ")
    B=[]
    for i in range(n):
        B.append(int(A[i]))
    A=B
    quicksort(A,0,n-1)
    diff=A[1]-A[0]
    for i in range(len(A)-1):
        if diff>A[i+1]-A[i]:
            diff=A[i+1]-A[i]
    print(diff)
                
