T=int(input())
for t in range(T):
    n=int(input())
    A=[]
    B=[]
    C=[]
    m=[]
    for N in range(n):
        a,b,c=[int(i) for i in input().split(" ")]
        if a==0:
            m.append(10**9)
        else:
            m.append(b/a)
    m.sort()
    res=1
    i=0
    print(m)
    while i<(len(m)):
        j=1
        while i+j<len(m) and m[i+j]==m[i+j-1]:
            j+=1
        i+=j
        res=max(res, j)
        
    print(res)
