def brute(n,b):
    ans=0
    for i in range(1,n):
        print(i*((n-i)/b),end=' ')
        ans=max(ans,i*((n-i)/b))
    return ans
for n in range(1,100):
    for b in range(1,100):
        #n,b=map(int,input().split(" "))
        ans=0
        brute(n,b)
        print()
        for i in range(1,n):
            cur=i*((n-i)//b)
            if cur<ans:
                break
            ans=max(ans,cur)
        if ans!=brute(n,b):
            print('false',n,b,ans,brute(n,b))
