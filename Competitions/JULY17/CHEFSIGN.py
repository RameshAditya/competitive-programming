T=int(input())
for t in range(T):
    s=input()
    maxcons=0
    i=0
    if len(set(s))==1 and s[0]=='=':
        print(1)
    else:
        while i<len(s):
            j=i+1
            waste=0
            while j<len(s) and (s[i]==s[j] or s[j]=='='):
                j+=1
                if s[j-1]=='=':
                    waste+=1
            maxcons=max(maxcons,j-i-waste)
            i=j
        print(1+maxcons)
