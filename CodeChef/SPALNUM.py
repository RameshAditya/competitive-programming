T=int(input())
for t in range(T):
    L,R=map(int,input().split(" "))
    s=[0]*100000
    for i in range(1,R+1):
        s[i]=s[i-1]
        if i==int(str(i)[::-1]):
            s[i]+=i
    print(s[R]-s[L-1])
