t = int(input())
for _ in range(t):
    j = input()
    s = input()
    j=sorted(j)
    s=sorted(s)
    i=0
    ct=0
    while(i<min(len(s),len(j))):
        if j[i]==s[i]:
            ct+=1
        i+=1
    print(ct)
