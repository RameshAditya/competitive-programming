def bs(A,el):
    lo=0
    hi=len(A)
    while lo<hi:
        mid=(lo+hi)//2
        if A[mid]>=el:
            hi=mid
        else:
            lo=mid+1
    return lo
    #returns the index where the new element should be inserted
t=int(input())
for T in range(t):
    n1,n2,n3=map(int,input().split(" "))
    A=list(map(int,input().split(" ")))
    B=list(map(int,input().split(" ")))
    C=list(map(int,input().split(" ")))
    A.sort()
    B.sort()
    C.sort()
    sum1=[0]*n1
    sum2=[0]*n2
    sum3=[0]*n3
    sum1[0]=A[0]
    sum2[0]=B[0]
    sum3[0]=C[0]
    res=0
    for i in range(1,n1):
        sum1[i]=A[i]+sum1[i-1]
    for i in range(1,n3):
        sum3[i]=C[i]+sum3[i-1]
    for i in range(n2):
        if B[i]<A[0] or B[i]<C[0]:
            continue
        lo1=bs(A,B[i])
        lo2=bs(C,B[i])
        
        if lo1==n1:
            lo1-=1
        if lo2==n3:
            lo2-=1
        res+=(sum1[lo1]+(lo1+1)*B[i])*(sum3[lo2]+(lo2+1)*B[i])
    print(res%1000000007)
    
