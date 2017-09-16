globalset=[]
T=int(input())
for t in range(T):
    globalset=[]
    n=int(input())
    A=[int(i) for i in input().split(" ")]
    globalset.append(A)
    for i in range(len(globalset)):
        for j in range(len(globalset[i])):
            if j==len(globalset[i])-2:
                if globalset[i][j]!=0 and globalset[i][j+1]!=0:
                    globalset[i][j]-=1
                    globalset[i][j+1]-=1
                    globalset[i].append(1)
                    globalset.append(globalset[i])
                    globalset[i]=globalset[i][:-1]
                    globalset[i][j]-=1
                    globalset[i][j+1]-=1
            if j+2<len(globalset[i]) and globalset[i][j]!=0 and globalset[i][j+1]!=0:
                globalset[i][j]-=1
                globalset[i][j+1]-=1
                globalset[i][j+2]+=1
                globalset.append(globalset[i])
                globalset[i][j]+=1
                globalset[i][j+1]+=1
                globalset[i][j+2]-=1
            #print(globalset)
        #i-=1
    print(globalset)

