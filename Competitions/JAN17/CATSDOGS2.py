T=int(input())
for t in range(T):
    max=0
    min=0
    c,d,l=map(int,input().split(" "))
    max=(c+d)
    if d==0:
        min=c
    elif c/2>=d:
        min=(c-d)
        #print(min)
    else:
        min=d
    print("yes") if l<=4*max and l>=4*min and (l%4)==0 else print("no")
