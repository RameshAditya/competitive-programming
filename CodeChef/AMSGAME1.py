def gcd(a,b):
    if b==0:
        return a
    else:
        return gcd(b,a%b)
T=int(input())
for t in range(T):
    N=int(input())
    s=input().split(" ")
    A=[]
    for i in s:
        A.append(int(i))
    if N==1:
        print(A[0])
    else:
        gcD=gcd(A[0],A[1])
        for i in range(1,N-1):
            gcD=gcd(gcD,gcd(A[i],A[i+1]))
        print(gcD)
