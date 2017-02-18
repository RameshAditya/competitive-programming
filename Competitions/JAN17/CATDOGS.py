T=int(input())
for t in range(T):
    c,d,l=map(int,input().split(" "))
    max=(c+d)<<2
    if d==0:
        min=c<<2
    elif c/2>=d:
        min=(c-d)<<2
        print(min)
    else:
        min=d<<2
    print("yes") if l<=max and l>=min and (l%4)==0 else print("no")
