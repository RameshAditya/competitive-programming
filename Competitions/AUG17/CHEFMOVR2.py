T=int(input())
for t in range(T):
    n,d=[int(i) for i in input().split(" ")]
    A=[int(i) for i in input().split(" ")]
    ok=1
    res=0
    if sum(A)%n!=0:
        ok=0
    else:
        avg=sum(A)//n
    lo=0
    hi=n-1
    while lo+d<=hi:
        if lo+d<n:
            while A[lo]<avg:
                res+=abs(avg-A[lo])
                A[lo+d]-=abs(avg-A[lo])
                A[lo]=avg
            while A[lo]>avg:
                res+=abs(avg-A[lo])
                A[lo+d]+=abs(avg-A[lo])
                A[lo]=avg
            lo+=1
        if hi-d>=0:
            while A[hi]<avg:
                res+=abs(A[hi]-avg)
                A[hi-d]-=abs(avg-A[hi])
                A[hi]=avg
            while A[hi]>avg:
                res+=abs(A[hi]-avg)
                A[hi-d]+=abs(A[hi]-avg)
                A[hi]=avg
            hi-=1
        if lo+d>=n and hi-d<0:
            break
    if len(set(A))==1:
        print(res)
    else:
        print(-1)
