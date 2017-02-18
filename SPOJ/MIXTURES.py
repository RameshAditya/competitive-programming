def sumc(x,y,A):
    ans=0
    for i in range(x,y+1):
        ans+=A[i]
    return ans%100

def mlm(A):
    n=len(A)
    m=[[0 for x in range(n)] for x in range(n)]
    for i in range(n):
        m[i][i]=0
    for L in range(2,n):
        for i in range(1,n-L+1):
            j=i+L-1
            m[i][j]=100000
            for k in range(i,j):
                q=m[i][k]+m[k+1][j]+sumc(i,k,A)*sumc(k+1,j,A)
                m[i][j]=min(m[i][j],q)
    print(m[1][n-1])
