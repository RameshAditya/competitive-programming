for i in range(int(input())):
    c=int(input())
    a=list(map(int,input().split()))
    v=[]
    a.sort()
    r=1
    m=1
    for j in range(len(a)-1):
        #v.append(a.count(a[j]))
        if a[j]==a[j+1]:
            m=m+1
        else:
            r=max(m,r)
            m=1
    print(len(a)-max(m,r))
