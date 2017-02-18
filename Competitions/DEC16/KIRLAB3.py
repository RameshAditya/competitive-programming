def gcd(A,B):
    if B==0:
        return A
    else:
        return gcd(B,A%B)
T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    ctm=1
    cta=[]
    ctends=[]
    for i in range(len(A)-1):
        ct=1
        for j in range(i+1,len(A)):
            if gcd(A[i],A[j])!=1:
                ct+=1
                cta.append(A[j])
                print('ct update',A[i],A[j])
        if ct>ctm:
            ctm=ct
            print('updating ctm')
    print(ctm)
