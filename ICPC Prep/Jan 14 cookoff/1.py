T=int(input())
for t in range(T):
    a=[[0 for i in range(1002)] for j in range(1002)]

    x1,y1,x2,y2=[int(i) for i in input().split(" ")]
    res=0

    for i in range(x1,x2):
        for j in range(y1,y2):
            a[i][j]=1
    
    x1,y1,x2,y2=[int(i) for i in input().split(" ")]
    for i in range(x1,x2):
        for j in range(y1,y2):
            a[i][j]=1

    for i in range(1002):
        for j in range(1002):
            res+=a[i][j]

    print(res)
