T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    res=0
    for i in A:
        res^=i
    print("First") if res==0 else (print("Second") if n&1 else print("First"))
