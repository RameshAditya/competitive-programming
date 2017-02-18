n,e=map(int,input().split(" "))
start=[]
end=[]
for i in range(e):
    a,b=map(int,input().split(" "))
    start.append(a)
    end.append(b)
flag=0
changelast=0
if end[e-1] not in [start[0],end[0]] and start[e-1] not in [start[0],end[0]]:
    flag=1
if end[e-1]==end[0] or start[0]==start[e-1]:
    start[0],end[0]=end[0],start[0]
if start[e-1]==start[0]:
    start[0],end[0]=end[0],start[0]
for i in range(e-1):
    if start[i]==start[i+1]:
        start[i+1],end[i+1]=end[i+1],start[i+1]
        if i==e-2:
            changelast=1
    elif end[i]==end[i+1]:
        start[i+1],end[i+1]=end[i+1],start[i+1]
        if i==e-2:
            changelast=1
if changelast or flag or (end[e-1]!=start[0] and end[0]!=start[e-1]):
    print("NO")
    for i in range(e):
        print(start[i],end[i])

else:
    print("YES")
    for i in range(e):
        print(start[i],end[i])
