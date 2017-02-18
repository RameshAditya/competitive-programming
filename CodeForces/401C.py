n,m=map(int,input().split(" "))
flag=1
s=''
if (n-1)<=m and m<=2*(n+1):
    if m==n-1:
        s+='0'
        n-=1
        while(m):
            s+='10'
            m-=1
    elif m==n:
        while(m):
            s+='10'
            m-=1
    elif m>n and m<=2*(n+1):
        while(n>0 and m>0):
            s+='110'
            n-=1
            m-=2
        while(n>0):
            s+='0'
            n-=1
        while(m>0):
            s+='1'
            m-=1
    print(s)
else:
    print(-1)
