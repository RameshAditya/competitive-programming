n,x=[int(i) for i in input().split(" ")]
d=0
for i in range(n):
    s,v=input().split(" ")
    v=int(v)
    if s=='+':
        x+=v
    if s=='-':
        if v>x:
            d+=1
        else:
            x-=v
print(x,d)
