T=int(input())
for t in range(T):
    maxct=0
    maxval=0
    n=int(input())
    A=list(map(int,input().split(" ")))
    A.sort()
    for i in A:
        if A.count(i)>maxct:
            maxct=A.count(i)
            maxval=i
    print(maxval,maxct)
