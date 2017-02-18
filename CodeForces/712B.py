vert=0
hor=0
s=input()
for i in s:
    if i=='U':
        vert+=1
    elif i=='D':
        vert-=1
    elif i=='R':
        hor+=1
    elif i=='L':
        hor-=1
if len(s)%2==0:
    print((abs(vert)+abs(hor))//2)
else:
    print(-1)
