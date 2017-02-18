import math

def dist(x1,y1,x2,y2):
    return math.sqrt((x2-x1)**2 + (y2-y1)**2)

T=int(input())
for t in range(T):
    N=int(input())
    X=[]
    Y=[]
    for n in range(N):
        x,y=map(int,input().split(" "))
        X.append(x)
        Y.append(y)
    M=int(input())
    L=[]
    C=[]
    ratio=[]
    for m in range(M):
        l,c=map(int,input().split(" "))
        L.append(l)
        C.append(c)
        ratio.append(l/c)
    maxratio=0
    maxl=0
    maxcost=0
    for i in range(len(ratio)):
        if maxratio<ratio[i]:
            maxratio=ratio[i]
            maxl=L[i]
            maxcost=C[i]
    distances=[0]*N
    for i in range(N):
        if i<N-1:
            distances[i]=dist(X[i],Y[i],X[i+1],Y[i+1])
        else:
            distances[i]=dist(X[i],Y[i],X[0],Y[0])
    cost=0
    for i in range(N):
        while distances[i]>0:
            if distances[i] not in L:
                cost+=maxcost
                distances[i]-=maxl
            elif distances[i] in L and C[L.index(distances[i])]<maxcost:
                cost+=C[L.index(distances[i])]
                distances[i]=0
    print(cost)
