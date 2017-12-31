n,m=[int(i) for i in input().split(" ")]
X=[]
Y=[]
for N in range(n):
    x,y=[int(i) for i in input().split(" ")]
    X.append(x)
    Y.append(y)
cur=0
for i in range(n):
    if X[i]<=cur:
        cur=Y[i]

if cur>=m:
    print('YES')
else:
    print('NO')
