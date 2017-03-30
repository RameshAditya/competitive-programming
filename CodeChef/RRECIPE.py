def solve(s):
    res=1
    if len(s)==1 and s[0]=='?':
        return 26
    for i in range(len(s)//2):
        if len(s)&1 and s[len(s)//2]=='?':
            res*=26
            res%=(10**7+9)
        if s[i]==s[len(s)-i-1] and (s[i]=='?' and s[len(s)-i-1]=='?'):
            res*=26
            res%=(10**7+9)
        elif s[i]!=s[len(s)-i-1] and (s[i]=='?' or s[len(s)-i-1]=='?'):
            res*=1
        elif s[i]!=s[len(s)-i-1]:
            res*=0
            break
    return res%(10**7 + 9)

T=int(input())
for t in range(T):
    s=input()
    print(solve(s))
