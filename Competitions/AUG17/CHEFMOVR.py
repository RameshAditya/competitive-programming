T=int(input())
for t in range(T):
    n,d=[int(i) for i in input().split(" ")]
    A=[int(i) for i in input().split(" ")]
    ok=1
    res=0
    if sum(A)%n!=0:
        ok=0
    else:
        avg=sum(A)//n
    '''
    for i in range(n):
        if i+d<n:
            while A[i]<avg and A[i+d]>avg:
                A[i+d]-=1
                A[i]+=1
                res+=1
        if i-d>=0:
            while A[i]<avg and A[i-d]>avg:
                A[i-d]-=1
                A[i]+=1
                res+=1
    if ok and len(set(A))==1 and A[0]==avg:
        print(res)
    else:
        print(-1)
    '''
    lo=0
    hi=n-1
    res=0
    #print(avg)
    #if not ok:
     #   print('not ok')
    while lo<=hi and lo<n and hi>=0 and len(set(A))!=1:
        if True: # and ((lo-d>=0 and A[lo-d]>avg) or (lo+d<n and A[lo+d]>avg)):
            while lo+d<n and A[lo+d]>avg:
                A[lo]+=1
                A[lo+d]-=1
                res+=1
                #print(A)
            while lo+d<n and A[lo]>avg:
                A[lo]-=1
                A[lo+d]+=1
                res+=1
                #print(A)
            while lo-d>=0 and A[lo-d]>avg:
                A[lo]+=1
                A[lo-d]-=1
                res+=1
                #print(A)
            while lo-d>=0 and A[lo]>avg:
                A[lo]-=1
                A[lo-d]+=1
                res+=1
                #print(A)
        lo+=1
        #print(lo,hi,A)
        if True:
            #print('h',d,A[hi])
            while hi+d<n and A[hi+d]>avg:
                A[hi]+=1
                A[hi+d]-=1
                res+=1
                #print(A)
            while hi+d<n and A[hi]>avg:
                A[hi]-=1
                A[hi+d]+=1
                res+=1
                #print(A)
            while hi-d>=0 and A[hi-d]>avg:
                A[hi]+=1
                A[hi-d]-=1
                res+=1
                #print(A)
            while hi-d>=0 and A[hi]>avg:
                A[hi]-=1
                A[hi-d]+=1
                res+=1
                #print(A)
        hi-=1
        #print(A)
    #print(A)
    if len(set(A))==1:
        print(res)
    else:
        print(-1)

    
'''
1. 1 2 3 4 5
2. 1 2 3 5 4
3. 1 2 3 6 3
4. 1 2 4 5 3
5. 1 2 5 4 3
6. 1 2 6 3 3
7. 1 3 5 3 3
8. 1 4 4 3 3
9. 1 5 3 3 3
10. 2 4 3 3 3
11. 3 3 3 3 3
'''


