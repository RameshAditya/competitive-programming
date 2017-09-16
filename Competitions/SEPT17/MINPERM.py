T=int(input())
for t in range(T):
    n=int(input())
    if n%2==0:
        for i in range(1,n+1):
            if i&1:
                print(i+1,end=' ')
            else:
                print(i-1,end=' ')
        print()
    else:
        cur=2
        for i in range(0,n-3,2):
            print(cur,cur-1,end=' ')
            cur+=2
        print(cur,cur+1,cur-1)
