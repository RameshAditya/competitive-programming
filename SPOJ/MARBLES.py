A=[]
for i in range(1000001):
    A.append(0)
A[0]=1
A[1]=1
A[2]=2
def fac(x):
    global A
    if x==0:
        return 1
    elif A[x]!=0:
        return A[x]
    elif A[x]==0:
        A[x]=x*fac(x-1)
        return A[x]

T=int(input())
for t in range(T):
    s=input()
    B=[]
    for i in s:
        if i.isdigit():
            B.append(int(i))
    n=B[0]
    k=B[1]
    print(B)
    print(fac(n-1)//(fac(k-1)*fac(n-k)))
