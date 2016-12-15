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

n=int(input())
A=[]
for i in range(n):
    A.append(int(input()))
quicksort(A,0,n-1)
max=0
for i in range(len(A)-1):
    if A[i]&A[i+1]>max:
        max=A[i]&A[i+1]
print(max)
