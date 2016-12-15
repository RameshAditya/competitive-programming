N,Q=map(int,input().split(" "))
X=[]
#(-1)-tails, 1-head
for i in range(N):
    X.append(-1)
for q in range(Q):
    s=input().split(" ")
    f=int(s[0])
    A=int(s[1])
    B=int(s[2])
    if f==0:
        for i in range(A,B+1):
            X[i]*=-1
    else:
        ct=0
        for i in range(A,B+1):
            if X[i]==1:
                ct+=1
        print(ct)
