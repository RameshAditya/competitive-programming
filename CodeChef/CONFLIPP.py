T=int(input())
A=[]
def init(A,Q,N):
    A=[]
    for i in range(N):
        A.append(Q)
    return A
for t in range(T):
    G=int(input())
    for g in range(G):
        s=input().split(" ")
        I=int(s[0])
        N=int(s[1])
        Q=int(s[2])
        A=init(A,I,N)
        if I==1:
            if N%2==0:
                for i in range(1,N,2):
                    A[i]=2
            else:
                for i in range(0,N,2):
                    A[i]=2
        else:
            if N%2==0:
                for i in range(1,N,2):
                    A[i]=1
            else:
                for i in range(0,N,2):
                    A[i]=1
        ct=0
        for i in range(N):
            if A[i]==Q:
                ct+=1
        print(ct)
