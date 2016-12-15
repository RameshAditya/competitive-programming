def backtrack(A,n):
    for i in range(n-2,-1,-1):
        for j in range(i,-1,-1):
            A[i][j]+=max(A[i+1][j],A[i+1][j+1])
    return A[0][0]


T=int(input())
for t in range(T):
    n=int(input())
    A=[]
    for i in range(n):
        B=input().split(" ")
        C=[]
        for j in B:
            if j=='':
                continue
            C.append(0)
        z=0
        for j in B:
            if j!='':
                C[z]=int(j)
                z+=1
        A.append(C)
    print(backtrack(A,n))
