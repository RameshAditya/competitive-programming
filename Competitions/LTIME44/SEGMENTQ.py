import sys
N,Q=map(int,input().split(" "))
segments=[]
active=[0]*N

for q in range(Q):
    s=input().split(" ")
    if int(s[0])==0:
        segments.append((int(s[1]),int(s[2])))
        #print('segments are',segments)
        #print('len',len(segments))
    if int(s[0])==1:
        ans=0
        active[int(s[1])-1]=1
        for i in range(len(segments)):
            if int(s[1]) in segments[i]:
                sum=0
                #print('found in',segments[i])
                #print('checking from',segments[i][0],segments[i][1])
                for j in range(segments[i][0]-1,segments[i][1]):
                    sum+=active[j]
                #print(sum)
                if sum==segments[i][1]+1-segments[i][0]:
                    ans+=1
        print(ans)
        sys.stdout.flush()
