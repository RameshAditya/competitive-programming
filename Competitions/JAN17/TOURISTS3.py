def check(start,end):
    flag=1
    for i in range(len(start)-1):
        if end[i]!=start[i+1]:
            flag=0
            break
    if end[len(end)-1]!=start[0]:
        flag=0
    if flag:
        return True
    else:
        return False
def checkdone(done):
    flag=0
    for i in done:
        if i==0:
            flag=1
    if flag:
        return False
    else:
        return True

n,e=map(int,input().split(" "))
start=[]
end=[]
flag=0
for i in range(e):
    a,b=map(int,input().split(" "))
    start.append(a)
    end.append(b)
    if a>n or b>n:
        flag=1
change=[0]*e
done=[0]*n
if n==1 or e==1 or e<n-1:
    print("NO")
else:
    flag=0
    for i in range(e-1):
        done[start[i]-1]=1
        done[end[i]-1]=1
        if end[i]==start[i+1]:
            continue
        if start[i]==start[i+1] and i==0:   #change the first row to avoid conflict
            start[i],end[i]=end[i],start[i]
            change[i]=1
        if start[i]==end[i+1] and e!=2:
            if change[i]+change[i+1]>0:
                flag=1
                break
            start[i],end[i]=end[i],start[i]
            change[i]=1
            start[i+1],end[i+1]=end[i+1],start[i+1]
            change[i+1]=1
        if  end[i]==end[i+1]:   #change the next row to not negate previous uniformity
            if change[i+1]==1:
                flag=1
                break
            start[i+1],end[i+1]=end[i+1],start[i+1]
            change[i+1]=1
        if start[i]==start[i+1] and i!=0:#change the next one
            if not change[i]:
                start[i],end[i]=end[i],start[i]
            if change[i]:
                flag=1
                break
    if flag:
        print("NO")
    elif check(start,end) and checkdone(done):
        print("YES")
        for i in range(len(end)):
            print(start[i],end[i])
    else:
        print("NO")
