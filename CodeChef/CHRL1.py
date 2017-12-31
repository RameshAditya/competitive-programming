T=int(input())
for t in range(T):
    n,k=[int(i) for i in input().split(" ")]
    C=[]
    W=[]
    for X in range(n):
        c,w=[int(i) for i in input().split(" ")]
        C.append(c)
        W.append(w)
    maxwt=0
    for i in range((1<<n)):
        curwt=0
        curcost=0
        for j in range(n):
            if i&(1<<j):
                curcost+=C[j]
                curwt+=W[j]
        if curcost<=k:
            maxwt=max(maxwt, curwt)
    print(maxwt)
        
