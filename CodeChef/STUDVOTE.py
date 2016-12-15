T=int(input())
for t in range(T):
    n,k=map(int,input().split(" "))
    A=list(map(int,input().split(" ")))
    votes=[]
    for i in range(len(A)):
        votes.append(0)
    for i in range(len(A)):
        if A[i]==i+1:
            votes[A[i]-1]=-1
        if votes[A[i]-1]!=-1:
            votes[A[i]-1]+=1
    ct=0
    for i in votes:
        if i>=k:
            ct+=1
    print(ct)
