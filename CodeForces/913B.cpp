#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
int vis[1005];
int ok=1;

int dfs(int node){
	if(!vis[node]){
		vis[node]=1;
		
		if(adj[node].size()==0)return 1;
		
		int sum=0;
		for(int i=0;i<adj[node].size();i++)
			sum+=dfs(adj[node][i]);
		
		if(sum<3)
			ok=0;
			
		return 0;
	}
}

int main(){
	int n;
	cin>>n;
	
	for(int i=0;i<n-1;i++){
		int x;
		cin>>x;
		adj[x-1].push_back(i+1);	
	}
	
	dfs(0);
	
	if(ok)cout<<"Yes\n";
	else cout<<"No\n";
}
