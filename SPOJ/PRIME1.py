import math
A=[]

def soe(A,m):
    for i in range(m+1):
        A.append(1)
    A[0]=0
    A[1]=0
    for i in range(1,int(math.sqrt(len(A)))+1):
        if A[i]==1:
            for j in range(i*i,len(A),i):
                A[j]=0
    return A
T=int(input())
for t in range(T):
    n,m=map(int,input().split(" "))
    A=soe(A,m)
    for i in range(n,m+1):
        if A[i]==1:
            print(i)
    print()
    
