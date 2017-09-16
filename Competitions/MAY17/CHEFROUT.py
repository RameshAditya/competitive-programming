T=int(input())
for t in range(T):
    s=input()
    cs=0
    es=0
    ss=0
    ok=1
    for i in range(len(s)):
        if s[i]=='C':
            cs=1
            if es==1 or ss==1:
                ok=0
        if s[i]=='E':
            es=1
            if ss==1:
                ok=0
        if s[i]=='S':
            ss=1
    print('yes') if ok else print('no')
