def solvescore(initial,final):
    ans=0
    for i in initial:
        ans+=(final.index(i)-initial.index(i))**2
    return ans


import random
n=int(input())
A=[]
for i in range(n):
    s=list(map(int,input().split(" ")))
    A.append(s)

B=[[A[i][j] for j in range(len(A[i]))] for i in range(n)]
C=[[A[i][j] for j in range(len(A[i]))] for i in range(n)]
D=[]
for i in range(n):
    B[i].sort()
    C[i].sort(reverse=True)
    if(solvescore(A[i],B[i])<solvescore(A[i],C[i])):
        D.append(B[i])
    else:
        D.append(C[i])

for i in D:
    for j in i:
        print(j,end=' ')
    print()
