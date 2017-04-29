T=int(input())
for t in range(T):
    n,k=map(int,input().split(" "))
    s=input()
    f=0
    ct=0 #number of bs after first a
    nob=[0 for i in range(n)]   #number of b's from index i
    if s[n-1]=='b':
        nob[n-1]=1
    for i in range(n-2,-1,-1):
        if s[i]=='b':
            nob[i]=nob[i+1]+1
        else:
            nob[i]=nob[i+1]
    #print(nob)
    res=0
    noba=[]
    for i in range(n):
        if s[i]=='a':
            noba.append(nob[i])
    #print(noba)
    ptr=0
    ct=0
    for ptr in range(len(noba)):
        res+=noba[ptr]
    res*=k #internal increment
    res+=s.count('a')*nob[0]*k*(k-1)//2
    print(res)
