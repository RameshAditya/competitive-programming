#include<bits/stdc++.h>
using namespace std;

int main(){
	std::ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		int n, m, s, e;
		cin>>n>>m>>s>>e;	
		vector<int> vis(n+1,0);
		vector< vector<int> > edges(n+1);
		for(int i=0;i<m;i++){
			int u, v;
			cin>>u>>v;
			edges[u].push_back(v);
			edges[v].push_back(u);
		}
		vector<int> levels(n, 1e9);
		queue<int> pq;
		pq.push(s);
		vis[s]=1;
		levels[s]=0;
		while(!pq.empty()){
			int cur=pq.front();
			pq.pop();
			for(int i=0;i<(int)edges[cur].size();i++){
				if(!vis[edges[cur][i]]){
					pq.push(edges[cur][i]);
					levels[edges[cur][i]]=min(levels[cur]+1, levels[edges[cur][i]]);
					vis[edges[cur][i]]=1;
				}
			}
		}
		for(int i=0;i<=n;i++)cout<<levels[i]<<" ";
		if(vis[e])cout<<"YES "<<levels[e]<<"\n";
		else cout<<"NO\n";
	}
}
