T=int(input())
for t in range(T):
    k=int(input())
    A=list(map(int,input().split(" ")))
    flag=1
    numofsplits=0
    if A[0]>2:
        flag=0
    numofsplits=2-A[0]
    for i in range(1,k):
        if A[i]>(1<<(numofsplits)):
            flag=0
        numofsplits=2**i - A[i]
    print("Yes") if flag else print("No")
