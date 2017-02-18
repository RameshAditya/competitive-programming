def infectedplanet(i,n,P,connections,neighbours):
    infected=[0]*n
    infected[i]=1
    for jk in range(neighbours[i]):
        infected[connections[i][jk]]=1
    maxpop=0
    index=0
    for k in range(n):
        if not infected[k]:
            if P[k]>maxpop:
                maxpop=P[k]
                index=k
                print('index updated',index)
    return [index+1,infected]

T=int(input())
for t in range(T):
    n=int(input())
    P=list(map(int,input().split(" "))) #populations 
    connections=[[0]*n]*n #neighbour indexes of planet i
    neighbours=[0]*n #number of neighbours of planet i
    #infected=[0]*n
    '''for _ in range(n-1):
        a,b=map(int,input().split(" "))
        connections[a-1][neighbours[a-1]]=(b-1)
        neighbours[a-1]+=1
        connections[b-1][neighbours[b-1]]=(a-1)
        neighbours[b-1]+=1
        print(connections,"\n\n",neighbours)'''
    for _ in range(n-1):
        a,b=map(int,input().split(" "))
        connections[a-1].append(b-1)
        neighbours[a-1]+=1
        connections[b-1].append(a-1)
        neighbours[b-1]+=1
        print(connections,'\n',neighbours)
    for it in range(n):
        print(infectedplanet(it,n,P,connections,neighbours),end=' ')
#planet 4 5 6
        
