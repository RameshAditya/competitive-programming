T=int(input())
for t in range(T):
    oca=[0]*2501
    ocb=[0]*2501
    occ=[0]*2501
    n,a,b,c=map(int,input().split(" "))
    ct=0
    for i in range(a+1):
        for j in range(b+1):
            for k in range(c+1,-1,-1):
                #if i+j+k<=n:
                #    ct+=1
                if i+j+k<=n:
                    ct+=k
                    break
    print(ct)
