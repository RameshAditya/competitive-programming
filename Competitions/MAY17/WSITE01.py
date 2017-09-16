T=int(input())
blocked=[]
occur=[[] for i in range(26)]
for t in range(T):
    s=input().split(" ")
    if s[0]=='-':
        for i in s[1]:
            if occur[ord(i)-ord('a')]!=1
