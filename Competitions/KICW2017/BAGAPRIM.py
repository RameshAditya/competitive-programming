T=int(input())
isprime=[1]*1000005
isprime[0]=0
isprime[1]=0
for i in range(2,1001):
    if isprime[i]:
        for j in range(i*i,1000005,i):
            isprime[j]=0
for t in range(T):
    l,r=[int(i) for i in input().split(" ")]
    c=0
    for i in range(l,r+1):
        if isprime[i]:
            c+=1
    print(c)
