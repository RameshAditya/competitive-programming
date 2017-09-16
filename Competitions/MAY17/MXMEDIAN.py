T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    A.sort()
    B=A[:n]
    C=A[n:]
    print(C[n//2])
    for i in range(n):
        print(B[i],C[n-i-1],end=' ')
    print()
    
