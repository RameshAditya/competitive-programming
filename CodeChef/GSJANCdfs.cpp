#include<bits/stdc++.h>
using namespace std;

int cur=1e9;
vector<int> vis(100, 0);
vector<vector<int> > edges(1000);
int dfs(int node, int dest, int val){
	//cout<<"Entering: "<<node<<" and cur is "<<cur<<"\n";
	if(node==dest)cur=min(val,cur);
	else if(!vis[node]){
		vis[node]=1;
		for(int i=0;i<(int)edges[node].size();i++)dfs(edges[node][i], dest, val+1);
	}
}

int main(){
	std::ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		int n, m, s, e;
		cin>>n>>m>>s>>e;	
		for(int i=0;i<n+1;i++)vis[i]=0;
		edges.clear();
		cur=1e9;
		for(int i=0;i<m;i++){
			int u, v;
			cin>>u>>v;
			edges[u].push_back(v);
			edges[v].push_back(u);
		}
		dfs(s, e, 0);
		cout<<cur<<"\n";
	}
}
