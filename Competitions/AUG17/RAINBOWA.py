has=[1,2,3,4,5,6,7]
T=int(input())
for t in range(T):
    n=int(input())
    A=[int(i) for i in input().split(" ")]
    ok=1
    for i in A:
        if i not in has:
            ok=0
    for i in has:
        if i not in A:
            ok=0
    lo=0
    hi=n-1
    while lo<=hi:
        if A[lo]==A[hi]:
            lo+=1
            hi-=1
        else:
            ok=0
            break
    if ok:
        print('yes')
    else:
        print('no')
