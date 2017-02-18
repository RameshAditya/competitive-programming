def bs(A,l,u,val):
    while(u-l>1):
        m=l+(u-l)//2
        if A[m]>val:
            u=m
        else:
            l=m
    return u

def longest(A,l,u):
    if len(A)==0:
        return 0
    length=1
    tail=[]
    for i in range(len(A)):
        tail.append(0)
    tail[0]=A[0]
    for i in range(l,u):
        if A[i]<tail[0]:
            tail[0]=A[i]
        elif A[i]>tail[length-1]:
            tail[length]=A[i]
            length+=1
        else:
            tail[bs(tail,-1,length-1,A[i])]=A[i]
    return length

T=int(input())
for t in range(T):
    n,m=map(int,input().split(" "))
    A=list(map(int,input().split(" ")))
    for m1 in range(m):
        l,u=map(int,input().split(" "))
        print(longest(A,l,u))
