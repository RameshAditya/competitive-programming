T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    if n==1:
        print("UNFIT")
    else:
        maxdiff=-1
        m=A[0]
        for i in range(n):
            if A[i]>m:
                maxdiff=max(maxdiff,A[i]-m)
            if A[i]<m:
                m=A[i]
        print(maxdiff) if maxdiff!=-1 else print("UNFIT")
