a,b,c=[int(i) for i in input().split(" ")]

a=a%b

f=1
for i in range(100000):
    if a<b:
        a=10*a
        res=a//b
        a=a%b
    if res==c:
        print(i+1)
        f=0
        break
    a%=b
if f:
    print(-1)
