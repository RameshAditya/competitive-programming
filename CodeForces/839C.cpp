#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> g[200005];

long double dfs(int v = 0, int p = -1){
	long double sum = 0;
	for(auto u : g[v])
		if(u != p)
			sum += dfs(u, v) + 1;
	return sum ? sum / (g[v].size() - (p != -1)) : 0;
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for(int v, u, i = 1; i < n; i++){
		cin >> v >> u, v--, u--;
		g[v].push_back(u);
		g[u].push_back(v);
	}
	cout << fixed << setprecision(7) << dfs() << "\n";
	return 0;
}
