T=int(input())
for t in range(T):
    n, q = [int(i) for i in input().split(" ")]
    A=[0]*n
    D=[0]*(n+1)
    for Q in range(q):
        l, r, v = [int(i) for i in input().split(" ")]
        D[l]+=v
        D[r+1]-=v
    w=int(input())
    A[0]=D[0]
    for i in range(1,n):
        A[i]=A[i-1]+D[i]
        
    for W in range(w):
        x = int(input())
        print(A[x])
        
        
