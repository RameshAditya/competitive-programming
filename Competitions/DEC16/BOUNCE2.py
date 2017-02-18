def gcd(r,c):
    if c==0:
        return r
    else:
        return gcd(c,r%c)
def noc(i,j):
    return (i+j)//gcd(i,j)
def createstring(r,c,strc):
    s=''
    dx=1
    dy=1
    ct=2
    x=0
    y=0
    while ct<noc(r,c):
        if dx==1 and dy==1:
            a=min(c-x,r-y)
            x+=a
            y+=a
        elif dx==1 and dy==-1:
            a=min(c-x,y)
            x+=(a)
            y-=a
        elif dx==-1 and dy==1:
            a=min(x,r-y)
            x-=a
            y+=abs(a)
        elif dx==-1 and dy==-1:
            a=min(x,y)
            x-=a
            y-=a
        if x>=c and y<r:
            s+='R'
            ct+=1
            dx=-1*dx
        elif y>=r and x<c:
            s+='T'
            ct+=1
            dy*=-1
        elif x<=0 and y<r:
            s+='L'
            ct+=1
            dx*=-1
        elif y<=0 and x<c:
            s+='D'
            ct+=1
            dy*=-1
        if len(s)>len(strc):
            if strc!=s[:len(strc)]:
                return 0
                break
    if strc==s[:len(strc)]:
        return len(s)
    else:
        return 0
T=int(input())
for t in range(T):
    n,lens=map(int,input().split(" "))
    strcmp=input()
    ans=0
    if strcmp[0]=='R' or strcmp[0]=='T':
        if len(strcmp)<2:
            for i in range(1,n+1):
                for j in range(1,n+1):
                    if i==j or noc(i,j)<len(strcmp):
                        continue
                    ans+=int(createstring(i,j,strcmp))
        else:
            if strcmp[1]=='L' and strcmp[0]=='R':
                for i in range(1,n//2+1):
                    for j in range(2*i,n+1):
                        #print('i,j',i,j)
                        if i==j or noc(i,j)<len(strcmp):
                            continue
                        ans+=int(createstring(j,i,strcmp))
            elif strcmp[1]=='T' and strcmp[0]=='R':
                for i in range(2,n//2+1):
                    for j in range(1,i//2+1):
                        if i==j or noc(i,j)<len(strcmp):
                            continue
                        ans+=int(createstring(j,i,strcmp))
            if strcmp[1]=='D' and strcmp[0]=='T':
                for i in range(1,n//2+1):
                    for j in range(2*i,n+1):
                        if i==j or noc(i,j)<len(strcmp):
                            continue
                        ans+=int(createstring(j,i,strcmp))
            elif strcmp[1]=='R' and strcmp[0]=='T':
                for i in range(2,n//2+1):
                    for j in range(1,i//2+1):
                        if i==j or noc(i,j)<len(strcmp):
                            continue
                        ans+=int(createstring(j,i,strcmp))
    print(ans)
