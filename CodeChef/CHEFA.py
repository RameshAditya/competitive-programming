T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    A.sort(reverse=True)
    sum=0
    for i in range(n):
        if i%2==0:
            sum+=A[i]
    print(sum)
