#sort, store minimum number of types individually in sep list, subtractthe rest and display

T=int(input())
for t in range(T):
    n,k=map(int,input().split(" "))
    upperlimit=n//k
    A=list(map(int,input().split(" ")))
    A.sort()
    uniques=[]
    excess=[]
    for i in A:
        if i not in uniques:
            uniques.append(i)
            excess.append(0)
    reqd=0
    needed=uniques[:upperlimit]
    for i in needed:
        if A.count(i)<=k:
            reqd+=k-A.count(i)
    print(reqd)
