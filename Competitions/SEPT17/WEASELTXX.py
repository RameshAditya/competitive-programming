def dfs(node, adj):
    global vis
    tem=A[node]
    for i in range(1,len(adj[node])):
        if not vis[adj[node][i]]:
            vis[adj[node][i]]=1
            tem^=dfs(adj[node][i],adj)
    vis[node]=0
    A[node]=tem
    return tem

n,q=[int(i) for i in input().split(" ")]
adj=[[0]]*n
vis=[0]*n
for i in range(n-1):
    u,v=[int(i) for i in input().split(" ")]
    adj[u].append(v)
    adj[v].append(u)
for i in range(n):
    A=[int(i) for i in input().split(" ")]
dp=[0]*505
for cur in range(505):
    ans=0
    dfs(0,adj)
    dp[cur]=A[0]

for i in range(q):
    d=int(input())
    print(dp[d-1])
