#global vars
#planet i has connections[i][], neighbours[i],infected[i],population[i]

T=int(input())
for _ in range(T):
    n=int(input())
    neighbours=[0]*n
    connections=[[0]*n]*n
    infected=[0]*n
    population=list(map(int,input().split(" ")))
    for __ in range(n-1):
        a,b=map(int,input().split(" "))
        connections[a-1][neighbours[a-1]]=b-1
        neighbours[a-1]+=1
        connections[b-1][neighbours[b-1]]=a-1
        neighbours[b-1]+=1
        print(connections,'\n',neighbours)

