#include<bits/stdc++.h>
using namespace std;

int par[1505];
char conn[1505][1505];

int find(int x){
	return (par[x]==x)?x:find(par[x]);
}

int unite(int x, int y){
	par[find(x)]=find(y);
}

int main(){
	std::ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)par[i]=i;
	for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cin>>conn[i][j];
	
	//for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cout<<"OP:"<<conn[i][j]<<"\n";
	
	int ans=0;
	vector<pair<int, int> > anp;
	
	for(int i=1;i<=n;i++)for(int j=i+1;j<=n;j++)if(conn[i][j]=='1')unite(i,j);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j && conn[i][j]=='0' && find(i)!=find(j)){
				conn[i][j]='1';
				unite(i,j);
				ans++;
				//cout<<"Entering:"<<i<<" "<<j<<"\n";
				anp.push_back({i,j});
			}
		}
	}
	
	cout<<ans<<"\n";
	sort(anp.begin(),anp.end());
	for(int i=0;i<ans;i++)cout<<anp[i].first<<" "<<anp[i].second<<"\n";
}
