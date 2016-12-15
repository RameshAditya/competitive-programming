ct=0
sum=0
def backtrack(A,r,c,n,ps):
    global ct
    global sum
    ps+=A[r][c]
    if r==0 and c==0:
        sum=0
        ct=0
    ct+=1
    if sum<ps:
        sum=ps
    if r<n-1:
        backtrack(A,r+1,c,n,ps)
        backtrack(A,r+1,c+1,n,ps)
    elif ct==2**(n-1):
        print(sum)
    

T=int(input())
for t in range(T):
    n=int(input())
    A=[]
    for i in range(n):
        B=input().split(" ")
        C=[]
        for j in B:
            if j=='':
                continue
            C.append(0)
        z=0
        for j in B:
            if j!='':
                C[z]=int(j)
                z+=1
        A.append(C)
    backtrack(A,0,0,n,0)
