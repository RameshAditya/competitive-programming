T=int(input())
for t in range(T):
    n,k=map(int,input().split(" "))
    A=list(map(int,input().split(" ")))
    ct=0
    for i in A:
        if i%2==0:
            ct+=1
    if ct>=k:
        print("YES")
    else:
        print("NO")
