T=int(input())
for t in range(T):
    s1=input()
    s2=input()
    al=[0 for i in range(26)]
    au=[0 for i in range(26)]
    bl=[0 for i in range(26)]
    bu=[0 for i in range(26)]
    d1=[0 for i in range(10)]
    d2=[0 for i in range(10)]
    
    for i in range(len(s1)):
        if ord(s1[i])<=90:
            au[ord(s1[i])-65]+=1
        elif ord(s1[i])>=97 and ord(s1[i])<=122:
            al[ord(s1[i])-97]+=1
        else:
            d1[ord(s1[i])-ord(0)]+=1
            
    for i in range(len(s2)):
        if ord(s2[i])<=90:
            bu[ord(s2[i])-65]+=1
        elif ord(s2[i])>=97 and ord(s2[i])<=122:
            bl[ord(s2[i])-97]+=1
        else:
            d2[ord(s1[i])-ord(0)]+=1
    res=0
    #print(al,bl,au,bu)
    for i in range(26):
        res+=min(au[i],bu[i])
        res+=min(al[i],bl[i])
    for i in range(10):
        res+=min(d1[i],d2[i])
    print(res)
