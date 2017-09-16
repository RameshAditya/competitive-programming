def extractnodesfrombinary(x,n):
    binary=bin(x)[2:]
    cur=0
    ans=[0]
    binary='0'*(n-len(binary))+binary
    for j in range(n):
        if binary[j]=='0':
            ans.append(2*cur+1)
            cur=2*cur+1
        else:
            ans.append(2*cur+2)
            cur=2*cur+2
    return ans

T=int(input())
for t in range(T):
    allnum={0}
    n,q=[int(i) for i in input().split(" ")]
    x=0
    change=(1<<n)
    for q0 in range(q):
        s=input().split(" ")
        if s[0]=='!':
            add=(1<<int(s[1]))
            x+=add
            x%=change
            z=extractnodesfrombinary(x,n)
            for i in z:
                allnum|={i}
        elif s[0]=='?':
            print(len(allnum)) #,allnum)
