T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    zeros=0
    cost=0
    for i in range(len(A)):
        if A[i]==0:
            zeros+=1
            cost+=1000
        elif A[i]==1:
            if zeros>0:
                zeros-=1
                cost+=200
    print(cost+100*zeros) if zeros>0 else print(cost)
            
