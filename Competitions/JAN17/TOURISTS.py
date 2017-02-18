n,e=map(int,input().split(" "))
start=[]
end=[]
for i in range(e):
    a,b=map(int,input().split(" "))
    start.append(a)
    end.append(b)
flag=1
valid=[0]*n
def checkvalid(valid):
    for i in valid:
        if i==0:
            return False
    return True
for i in range(e):
    valid[end[i]-1]=1
    valid[start[i]-1]=1
    if i<e-1:
        if end[i]!=start[i+1]:
            if end[i]==end[i+1]:
                start[i+1],end[i+1]=end[i+1],start[i+1]
            else:
                flag=0
        elif start[i]==start[i+1]:
            if i==0:
                if start[i]==end[e-1]:
                    start[i+1],end[i+1]=end[i+1],start[i+1]
                else:
                    start[i],end[i]=end[i],start[i]
            else:
                start[i+1],end[i+1]=end[i+1],start[i+1]
    if i==e-1:
        if end[i]!=start[0]:
            if end[i]==end[0]:
                if start[i]==end[i-1]:
                    flag=0
            #flag=0
if flag==0 or checkvalid(valid)==False:
    print("NO")
else:
    print("YES")
    for i in range(len(start)):
        print(start[i],end[i])
'''
#case
        3 3
        1 2
        1 3
        2 3
'''
