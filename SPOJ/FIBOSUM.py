MOD = 1000000007
fibo=[0]*1000
fibo[1]=1
fibo[2]=1
#fibo.append(1)
#fibo.append(1)
for i in range(3,1000):
    fibo[i]=fibo[i-1]+fibo[i-2]

def mul(A,B):
    C=[[0,0],[0,0]]
    for i in range(2):
        for j in range(2):
            for k in range(2):
                C[i][j] += (A[i][k] * B[k][j])%MOD
    for i in range(2):
        for j in range(2):
            A[i][j]=C[i][j]%MOD
    return A

def power(A,n):
    coeff=[[1,1],[1,0]]
    if n==1:
        return A
    else:
        B=mul(A,[[1,0],[0,1]])
        A=power(A,n//2)
        A=mul(A,A)
        if n&1:
            mul(A,coeff)
        #else:
        #    mul(A,[[1,0],[0,1]])
        A=B
        return A

def solve(n):
    if n==0 or n==1:
        return n
    elif n==2:
        return 1
    else:
        A=power([[1,1],[1,0]],n-2)
        return (A[0][0]%MOD + A[0][1]%MOD)%MOD
            
T=int(input())
for t in range(T):
    s,e=[int(i) for i in input().split(" ")]
    print((solve(e+2)%MOD)-(solve(s+1)%MOD)%MOD)
