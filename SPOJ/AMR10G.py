T=int(input())
for t in range(T):
    n,k=map(int,input().split(" "))
    A=list(map(int,input().split(" ")))
    A.sort()
    diff=100000000
    for i in range(n-k+1):
        if diff>A[i+k-1]-A[i]:
            diff=A[i+k-1]-A[i]
    print(diff)
