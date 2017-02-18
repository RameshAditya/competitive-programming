def gcd(X,Y):
    if Y==0:
        return X
    else:
        return gcd(Y,X%Y)
T=int(input())
for t in range(T):
    N=int(input())
    ct=1
    ctf=1
    A=list(map(int,input().split(" ")))
    gcdarray=[]
    for i in range(len(A)-1):
        if gcd(A[i],A[i+1])!=1:
            ct+=1
            print('incrementing ct for',A[i],A[i+1])
        if ct>ctf:
            ctf=ct
        if gcd(A[i],A[i+1])==1:
            ct=1
            print('reinitializing at',A[i],A[i+1])
    print(ctf)
    '''gcdarray.append(gcd(A[i],A[i+1]))
    f=0
    i=0
    print(gcdarray)
    while i<len(gcdarray):
        if gcdarray[i]!=1:
            ct+=1
        if gcdarray[i]==1:
            f=1
        i+=1
    if f:
        ct+=1
    print(ct)'''
