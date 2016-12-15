T=int(input())
for t in range(T):
    n=int(input())
    l=list(map(int,input().split(" ")))
    r=list(map(int,input().split(" ")))
    p=[]
    for i in range(n):
        p.append(l[i]*r[i])
    max=p[0]
    maxr=r[0]
    maxi=0
    for i in range(1,len(p)):
        if p[i]>max:
            maxi=i
            max=p[i]
            maxr=r[i]
        elif p[i]==max:
            if r[i]>maxr:
                max=p[i]
                maxi=i
                maxr=r[i]
        else:
            continue
    print(maxi+1)
