n,q=map(int,input().split(" "))
for q0 in range(q):
    x=int(input())
    if x<=n:
        print(0)
    else:
        l=max(q-n,n+1)
        r=min(q-1,2*n)
        print(r-l+1)
