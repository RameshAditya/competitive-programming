n=int(input())
s=input()
ct=[0]*26
ans=0
for i in s:
    if ord(i)>=ord('a') and ord(i)<=ord('z'):
        ct[ord(i)-ord('a')]=1
    ans=max(ans,sum(ct))
    if ord(i)>=ord('A') and ord(i)<=ord('Z'):
        for j in range(26):
            ct[j]=0
    ans=max(ans,sum(ct))
print(max(ans,sum(ct)))
