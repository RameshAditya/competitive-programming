T=int(input())
words=[]
case=[]
for t in range(T):
    s=list(input().split(" "))
    case.append(s[0])
    words.append(s[1])
case=[x for (y,x) in sorted(zip(words,case))]
words.sort()
#print(words,case)
maxlen=[0]*len(words)
allowed=[1]*len(words)
for i in range(len(words)):
    if case[i]=='-' and allowed[i]:
        for j in range(len(words)):
            if case[j]=='+':
                jptr=0
                x=0
                while jptr<len(words[i]) and x<len(words[j]) and words[i][jptr]==words[j][x]:
                    jptr+=1
                    x+=1
                if x!=len(words[j]) and allowed[i]:
                    #print(jptr,x,words[j],words[i])
                    maxlen[i]=max(maxlen[i],jptr+1)
                else:
                    allowed[i]=0
#print(maxlen)
ct=0
for i in range(len(maxlen)):
    if maxlen[i]>0:
        ct+=1
if case.count('-')==0:
    print(0)
elif ct==0:
    print(-1)
else:
    print(ct)
#print(words)
    for i in range(len(maxlen)):
        if maxlen[i]>0:
            print(words[i][:maxlen[i]])

