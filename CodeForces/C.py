s=input()
ct=[s.index(chr(i+ord('a'))) if chr(i+ord('a')) in s else -1 for i in range(26)]
print('init',ct)
ct=[-1]*26
#for i in range(26):
    #if ct[i]==-1:
        #ct[i]=len(s)+2
dist=[len(s)+2]*26
for i in range(len(s)):
    dist[ord(s[i])-ord('a')]=min(dist[ord(s[i])-ord('a')],i-ct[ord(s[i])-ord('a')])
    ct[ord(s[i])-ord('a')]=i
    
