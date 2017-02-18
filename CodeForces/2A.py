T=int(input())
names=[]
scores=[]
maxname=''
maxscore=-1001
for t in range(T):
    s=input().split(" ")
    if s[0] not in names:
        names.append(s[0])
        scores.append(0)
    if s[0] in names:
        scores[names.index(s[0])]+=int(s[1])
        if scores[names.index(s[0])]>maxscore or (s[0]==maxname and scores[names.index(s[0])]==max(scores)):
            maxscore=scores[names.index(s[0])]
            maxname=s[0]
print(maxname)
