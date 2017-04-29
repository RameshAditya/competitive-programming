T=int(input())
for t in range(T):
    n=int(input())
    a=list(map(int,input().split(" ")))
    b=list(map(int,input().split(" ")))
    a.sort()
    b.sort()
    ap=0
    bp=0
    while ap<n and bp<n:
        if a[ap]<=b[bp]:
            ap+=1
            bp+=1
        else:
            bp+=1
    print(ap)
