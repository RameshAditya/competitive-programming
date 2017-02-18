if dx==1 and dy==1:
    a=min(c-x,r-y)
    x+=a
    y+=a
elif dx==1 and dy==-1:
    a=min(c-x,-y)
    x+=a
    y+=a
elif dx==-1 and dy==1:
    a=min(-x,r-y)
    x+=a
    y+=a
elif dx==-1 and dy==-1:
    a=min(-x,-y)
    x+=a
    y+=a



################################################################################
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
