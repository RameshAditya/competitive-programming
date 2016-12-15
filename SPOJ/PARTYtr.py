def knapSack(W, wt, val, n):
    K = [[0 for x in range(W+1)] for x in range(n+1)]
    for i in range(n+1):
        for w in range(W+1):
            if i==0 or w==0:
                K[i][w] = 0
            elif wt[i-1] <= w:
                K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w])
            else:
                K[i][w] = K[i-1][w]
 
    return K[n][W]
W,n=map(int,input().split(" "))
while W!=0 or n!=0:
    wt=[]
    val=[]
    for wn in range(n):
        x,y=map(int,input().split(" "))
        wt.append(x)
        val.append(y)
    print(knapSack(W,wt,val,n))
    blank=input()
    W,n=map(int,input().split(" "))

