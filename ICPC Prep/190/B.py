def dista(x1,y1,x2,y2):
    dist=((x2-x1)**2+(y2-y1)**2)**(0.5)
    return dist
x1,y1,r1=[int(i) for i in input().split()]
x2,y2,r2=[int(i) for i in input().split()]

if(dista(x1,y1,x2,y2)+min(r1,r2)<=max(r1,r2)):
    ans=max(r1,r2)-dista(x1,y1,x2,y2)-min(r1,r2)
    ans1=max(r1,r2)-min(r1,r2)
    ans/=2
    ans1/=2
    print(min(ans,ans1))
else:
    ans=dista(x1,y1,x2,y2)-r1-r2
    ans/=2
    if(ans>0):
        print(ans)
    else:
        print(0)
