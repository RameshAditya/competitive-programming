T=int(input())
for t in range(T):
    n,k=map(int,input().split(" "))
    A=list(map(int,input().split(" ")))
    B=list(map(int,input().split(" ")))
    ans=0
    for i in range(n):
        ans=max(ans,(k//A[i] * B[i]))
    print(ans)
