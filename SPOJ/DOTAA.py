T=int(input())
for t in range(T):
    c=0
    n,m,d=map(int,input().split(" "))
    for N in range(n):
        a=int(input())
        if max(a,d)%min(a,d)==0:
            c+=(a//d)-1
        else:
            c+=a//d
    if c>m:
        print("YES")
    else:
        print("NO")
