T=int(input())
for t in range(T):
    s=input()
    ans=0
    ct=[0]*26
    ch=set(s)
    for i in s:
        ct[ord(i)-ord('a')]+=1
    for i in s:
        if sum(ct)==2*ct[ord(i)-ord('a')]:
            ans=1
    print("YES") if ans else print("NO")
