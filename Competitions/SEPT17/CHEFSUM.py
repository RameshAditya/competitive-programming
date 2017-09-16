T=int(input())
for t in range(T):
    n=int(input())
    A=[int(i) for i in input().split(" ")]
    pref=[0]*n
    suf=[0]*n
    pref[0]=A[0]
    suf[n-1]=A[n-1]
    for i in range(1,n):
        pref[i]=A[i]+pref[i-1]
        suf[n-i-1]=A[n-i-1]+suf[n-i]
    minval=suf[0]+pref[0]
    minind=0
    for i in range(n):
        if minval>suf[i]+pref[i]:
            minval=suf[i]+pref[i]
            minind=i
    print(minind+1)
