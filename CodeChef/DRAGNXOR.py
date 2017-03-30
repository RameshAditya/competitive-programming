T=int(input())
for t in range(T):
    k,a,b=map(int,input().split(" "))
    ca=a
    cb=b
    noa=0
    nob=0
    nza=0
    nzb=0
    x=0
    y=0
    if ca==0:
        nza=k
        noa=0
    if cb==0:
        nzb=k
        nob=0
    while(ca):
        if ca&1==1:
            noa+=1
        ca>>=1
    while(cb):
        if cb&1:
            nob+=1
        cb>>=1
    nzb=k-nob
    nza=k-noa
    x=min(noa,nzb)
    y=min(nza,nob)
    z=x+y
    print(((1<<z)-1)<<(k-z))
