T=int(input())
for t in range(T):
    ct=0
    a,b=map(int,input().split(" "))
    while(a!=b):
        if(a>b):
            a>>=1
            ct+=1
        if(a==b):
            break
        if(b>a):
            b>>=1
            ct+=1
    print(ct)
