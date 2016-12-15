T=int(input())
for t in range(T):
    n=int(input())
    sum=n**2
    def calcsum(n):
        sumt=0
        if n==0:
            return 0
        #for i in range(0,n):
        sumt=2**(n)-1
        return sumt
    for i in range(0,n):
        sum+=calcsum(i)
    print(sum)
