def smallestindexabovesum(A,n,l,u):
    m=(l+u)//2
    while l<u:
        m=(l+u)//2
        if m>1:
            if A[m]>n and A[m-1]<n:
                print('a')
                return m
        if m<u-1:
            if A[m]<n and A[m+1]>n:
                return m+1
        if A[m]==n:
            print('b')
            return m+1
        elif A[m]<n:
            print('c')
            l=m
        elif A[m]>n:
            print('d')
            u=m
    
n=int(input())
while(n!=0):
    x=0
    s=input().split(" ")
    A=[]
    for i in s:
        A.append(int(i))
    A=sorted(A)
    print(A)
    ans=0
    for i in range(n-1):
        for j in range(i+1,n):
            sum=A[i]+A[j]
            x+=smallestindexabovesum(A,sum,0,len(A)-1)
            ans+=n-x
    print(ans)
    n=int(input())
