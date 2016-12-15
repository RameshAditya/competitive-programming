T=int(input())
for t in range(T):
    N,M,K=map(int,input().split(" "))
    A=list(map(int,input().split(" ")))
    B=list(map(int,input().split(" ")))
    ct1=0
    ct2=0
    for i in range(1,N+1):
        if i in A and i in B:
            ct1+=1
        if i not in A and i not in B:
            ct2+=1
    print(ct1,ct2)
