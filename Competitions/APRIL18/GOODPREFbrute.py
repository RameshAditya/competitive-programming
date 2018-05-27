def brute(s,n):
    ct=0
    cur=0
    s=s*n
    for i in s:
        if i=='a':
            cur+=1
        if i=='b':
            cur-=1
        if cur>0:
            ct+=1
    #print('B',ct)
    
    return ct
T = int(input())
for t in range(T):
    s,n = input().split(" ")
    n = int(n)

    print(brute(s,n))
