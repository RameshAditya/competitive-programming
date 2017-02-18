def gcd(r,c):
    if c==0:
        return r
    else:
        return gcd(c,r%c)
def createstring(r,c,strcmp):
    x = 0
    y = 0
    dx = 1
    dy = 1
    ct = 0
    s=''
    s2=''
    ml=0
    while ct < (r+c)//gcd(r,c) - 2:
        x+=dx
        y+=dy
        if(x>=c and y<r):    #hit right side
            dx=-1*dx
            s+='R'
            ct += 1
        if(x<c and y>=r):    #hit top
            dy=-1*dy
            s+='T'
            ct += 1
        if(x<=0 and y<r):   #hit left side
            dx=-1*dx
            s+='L'
            ct += 1
        if(x<c and y<=0):    #hit bottom
            dy=-1*dy
            s+='D'
            ct += 1
        #print('ct',ct,'s',s)
    if len(s)>=len(strcmp):
        if strcmp in s[0:len(strcmp)]:
            ml += len(s)
    #print('1',x,y)
    if r!=c:
        x = 0
        y = 0
        dx = 1
        dy = 1
        ct = 0
        while ct < (r+c)//gcd(r,c) - 2:
            x+=dx
            y+=dy
            if(x>=r and y<c):    #hit right side
                dx=-1*dx
                s2+='R'
                ct += 1
            if(x<r and y>=c):    #hit top
                dy=-1*dy
                s2+='T'
                ct += 1
            if(x<=0 and y<c and y>0):   #hit left side
                dx=-1*dx
                s2+='L'
                ct += 1
            if(x<r and y<=0):    #hit bottom
                dy=-1*dy
                s2+='D'
                ct += 1
            #print('ct',ct,'s2',s2)
        if len(s2)>=len(strcmp):
            if strcmp in s2[0:len(strcmp)]:
                ml += len(s2)
    return ml
T=int(input())
for t in range(T):
    n,lens=map(int,input().split(" "))
    strcmp=input()
    ans=0
    for i in range(1,n+1):
        for j in range(i,n+1):
            ans+=createstring(i,j,strcmp)
    print(ans)
