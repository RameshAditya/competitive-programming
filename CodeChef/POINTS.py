def dist(x1,y1,x2,y2):
    return ((x2-x1)**2 + (y2-y1)**2)**0.5
def p(X,Y,l,u):
    i=l-1
    pivot=X[u]
    for j in range(l,u):
        if X[j]<=pivot:
            i+=1
            Y[j],Y[i]=Y[i],Y[j]
            X[j],X[i]=X[i],X[j]
    X[u],X[i+1]=X[i+1],X[u]
    Y[u],Y[i+1]=Y[i+1],Y[u]
    return i+1
def qs(X,Y,l,u):
    if l<u:
        pi=p(X,Y,l,u)
        qs(X,Y,l,pi-1)
        qs(X,Y,pi+1,u)
    return [X,Y]
T=int(input())
for t in range(T):
    blank=input()
    n=int(input())
    X=[]
    Y=[]
    for _ in range(n):
        X.append(0)
        Y.append(0)
    i=0
    for N in range(n):
        X[i],Y[i]=map(int,input().split(" "))
        i+=1
    qs(X,Y,0,len(X)-1)
    
    for x in range(len(X)-1):
        if X[x]==X[x+1]:
            if Y[x]<Y[x+1]:
                Y[x+1],Y[x]=Y[x],Y[x+1]
    print('X',X,'Y',Y)
    dista=0
    for x in range(len(X)-1):
        dista+=dist(X[x],Y[x],X[x+1],Y[x+1])
    print(format(dista,'.2f'))
