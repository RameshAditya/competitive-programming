t=int(input())
for i in range(t):
    sum=0
    n1=int(input())
    m=input().split(" ")
    M=[]
    for x in m:
        M.append(int(x))
    n=input().split(" ")
    N=[]
    for x in n:
        N.append(int(x))
    m=sorted(M)
    n=sorted(N)
    #print(m,n)
    for i in range(n1):
        sum+=(m[i]*n[i])
    print(sum)
