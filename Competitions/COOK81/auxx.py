def dist(x1,y1,x2,y2):
    return ((x2-x1)**2 + (y2-y1)**2)**0.5
startx=0
starty=0
x=[]
y=[]
totaldist=0
for n_ in range(int(input())):
    X,Y=map(int,input().split(" "))
    x.append(X)
    y.append(Y)
for mm in range(len(x)):
            totaldist+=dist(startx,starty,x[mm],y[mm])
            startx=x[mm]
            starty=y[mm]
totaldist+=dist(startx,starty,0,0)
