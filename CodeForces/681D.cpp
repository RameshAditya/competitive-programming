#include<bits/stdc++.h>
using namespace std;

int par[100005];

int find(int i){
	return (par[i]==i)?i:find(par[i]);
}

int unite(int i, int j){
	par[find(j)]=i;
}

int main(){
	int n,m;
	std::ios_base::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++)par[i]=i;
	for(int i=1;i<=m;i++){
		int p,q;
		cin>>p>>q;
		unite(p,q);
	}
	int yea=0;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(a==find(i))yea++;
	}
	(yea==0)?cout<<-1:cout<<yea;
}
		
