import math
T=int(input())
for t in range(T):
    n=int(input())
    x=[]
    y=[]
    z=[0.0]*n
    tita=2*math.pi
    share=tita/n
    start=0
    for i in range(n):
        xtemp=math.cos(start)
        ytemp=math.sin(start)
        if xtemp>10**-5:
            x.append(xtemp)
        else:
            x.append(0)
        if ytemp>10**-5:
            y.append(ytemp)
        else:
            y.append(0)
        start+=share
    for i in range(n):
        print(x[i],y[i],z[i])
