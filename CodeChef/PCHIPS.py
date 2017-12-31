T=int(input())
for t in range(T):
    n=int(input())
    A=[int(i) for i in input().split(" ")]
    c=0
    res=0
    for i in range(51):
        if ((i+n)*(i+n+1))//2 - (i*(i+1))//2==sum(A):
            c=1
            #print(i,i+n)
            for k in range(i+1,i+n+1):
                #print('i',i)
                res+=abs(A[k-i-1]-k)
            print(res//2)
            break
    if c==0:
        print(-1)
