#include<bits/stdc++.h>
using namespace std;
 
long long int A[10005],dp[505],vis[10005];
long long int ans=0;
long long int n,q;
long long int adj[505][505];

long long int dfs(long long int node){
	if(!vis[node]){
		vis[node]=1;
		long long int tem=A[node];
		for(long long int i=0;i<n;i++){
			if(adj[node][i]){
				tem^=dfs(i);
			}
		}
		return A[node]=tem;
	}
	return 0;
}
 
int main(){
	scanf("%lld%lld",&n,&q);
	
	for(long long int i=0;i<n;i++)
		for(long long int j=0;j<n;j++)
			adj[i][j]=0;
	
	for(long long int i=0;i<n-1;i++){
		int u,v;
		scanf("%d%d",&u,&v);
		adj[u][v]=1;
		adj[v][u]=1;
	}
	
	for(long long int i=0;i<n;i++){scanf("%lld",&A[i]);vis[i]=0;}
	
	for(long long int cur=0;cur<=501;cur++){
		ans=0;
		for(long long int i=0;i<n;i++)
			vis[i]=0;
		dfs(0);
		dp[cur]=A[0];
	}
 
	for(long long int qq=0;qq<q;qq++){	
		
		int d;
		scanf("%d",&d);
		//d=d%n;
		printf("%lld\n",dp[d-1]);
	}
} 
