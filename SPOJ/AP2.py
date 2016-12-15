t=int(input())
for i in range(t):
    s=input().split(" ")
    X=int(s[0])
    Y=int(s[1])
    Z=int(s[2])
    n=(2*(Z))//(X+Y)
    d=(X-Y)//(5-n)
    a=X-2*d
    print(n)
    for x in range(1,n+1):
        print(a+(x-1)*d,end=' ')
