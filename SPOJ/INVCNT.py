def count(A,i,el):
    u=len(A)
    ct=0
    for j in range(i,u):
        if A[j]<=el:
            ct+=1
    return ct
T=int(input())
for t in range(T):
    blank=input()
    N=int(input())
    A=[]
    for n in range(N):
        A.append(int(input()))
    B=[]
    ans=0
    for i in range(len(A)):
        if A[i] not in B:
            ans+=count(A,i,A[i])
            B.append(A[i])
    print(ans)
