A=[]
import math
for i in range(2010):
    A.append(1)
A[0]=0
A[1]=0
def sieve(x):
    global A
    for i in range(2,int(math.sqrt(x))+1):
        if A[i]==1:
            for j in range(i*i,x+1,i):
                A[j]=0
T=int(input())
sieve(2009)
for t in range(T):
    x,y=map(int,input().split(" "))
    if A[x+y]==1:
        print(A[x+y:].index(1,1))
    else:
        print(A[x+y:].index(1))
