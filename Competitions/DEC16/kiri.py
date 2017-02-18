def gcd(A,B):
    if B==0:
        return A
    else:
        return gcd(B,A%B)
def li(A):
    n=len(A)
    lis=[1]*n
    for i in range(1,n):
        for j in range(0,i):
            if gcd(A[i],A[j])>=1 and lis[i]<lis[j]+1:
                lis[i]=lis[j]+1
    maxim=0
    maxim = max(lis[i])
    return maxim
T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    print(li(A))
