def convert(a,b,c,end):
    init=a
    a=max(end,c-b+1)
    print(init,a)
    return [init-a,a]

start,end=map(int,input().split(" "))
a=start
b=start
c=start
time=0
while(a!=end and b!=end and c!=end):
    if(a!=end):
        temp=convert(a,b,c,end)
        time+=temp[0]
        a=temp[1]
    if(b!=end):
        temp=convert(b,a,c,end)
        time+=temp[0]
        b=temp[1]
    if(c!=end):
        temp=convert(c,a,b,end)
        time+=temp[0]
        c=temp[1]
print(time)
