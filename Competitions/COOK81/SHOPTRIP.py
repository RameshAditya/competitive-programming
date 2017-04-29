import math
def dist(x1,y1,x2,y2):
    return ((x2-x1)**2 + (y2-y1)**2)**0.5

def bruteforce(X,Y,a):
    k=len(a[0])
    n=len(a)
    ever=0
    mindist=-1
    ingredients=[0 for i in range(k)]
    for i in range(2**n):
        ingredients=[0 for i in range(k)]
        totaldist=0
        startx=0
        starty=0
        nodes=[]
        for j in range(n):
            if i&(1<<j):    #if going to that shop
                for m in range(k):
                    if a[j][m]=='1':
                        ingredients[m]=1
                nodes.append(j)
                #totaldist+=dist(startx,starty,x[j],y[j])
                #startx=x[j]
                #starty=y[j]
        
        
        if sum(ingredients)==k:
            for mm in range(len(nodes)):
                totaldist+=dist(startx,starty,x[nodes[mm]],y[nodes[mm]])
                startx=x[nodes[mm]]
                starty=y[nodes[mm]]
            totaldist+=dist(startx,starty,0,0)
            ever=1
            if mindist==-1:
                mindist=totaldist
            else:
                mindist=min(mindist,totaldist)
    if ever==0:
        return -1
    return mindist

T=int(input())
for t in range(T):
    n,k=map(int,input().split(" "))
    x=[]
    y=[]
    for n_ in range(n):
        X,Y=map(int,input().split(" "))
        x.append(X)
        y.append(Y)
    a=[]
    for i in range(n):
        b=input()
        a.append(b)
    
    print(bruteforce(X,Y,a))
