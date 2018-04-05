#include<bits/stdc++.h>
using namespace std;

map<char, int> ma;
vector< vector<int> > edges;
vector<int> visi;
string s;

int dfs(int node){
	
	
	
}

int main(){
	std::ios_base::sync_with_stdio(0);
	int n, m;
	cin>>n>>m;
	
	edges.resize(n+1);
	visi.resize(n+1);
	
	cin>>s;
	for(int i=0;i<m;i++){
		int x, y;
		cin>>x>>y;
		edges[x].push_back(y);	
	}
	//if cycle, print -1
	dfs(
	
}
