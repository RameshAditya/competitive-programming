def gcd(A,B):
    if B==0:
        return A
    else:
        return gcd(B,A%B)

T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    gcda=[]
    last=A[0]
    i=0
    ct=1
    while i<len(A)-1:
        if gcd(A[i],A[i+1])==1:
            if gcd(last,A[i+1])!=1:
                gcda.append(A[i+1])
                ct+=1
                #print('updated ct at',last,A[i+1])
        elif A.index(last)+1==i:
            ct+=1
            #print('ct updated',A[i],A[i+1])
            last=A[i]
        i+=1
    print(ct)
