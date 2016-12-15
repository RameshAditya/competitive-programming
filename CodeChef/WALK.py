T=int(input())
for t in range(T):
    N=int(input())
    w=input().split(" ")
    A=[]
    for i in w:
        A.append(int(i))
    ans=A[len(A)-1]
    for i in range(len(A)-2,-1,-1):
        if ans>=A[i]:
            ans+=1
        else:
            ans=A[i]
    print(ans)
