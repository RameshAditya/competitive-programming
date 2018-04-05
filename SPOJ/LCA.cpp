/*input
1
7
3 2 3 4
0
3 5 6 7
0
0
0
0
2
5 7
2 7
*/
#include <algorithm>
#include <cassert>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <iostream>
#include <iomanip>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <queue>
#include <complex>
#include <exception>
#include <iosfwd>
#include <iterator>
#include <list>
#include <memory>
#include <new>
#include <stdexcept>
#include <string>
#include <typeinfo>
#include <utility>
#define ll long long int
#define vi vector<long long int>
#define mset(A,v,n) memset((A),(v),(n)*sizeof((A)[0]) )
#define FORi(n) for(int i=0;i<(n);i++)
#define FORj(n) for(int j=0;j<(n);j++)
#define pb push_back
#define mp(a,b) make_pair((a),(b))
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define pi pair< ll, ll >
using namespace std;

int heights[1005];
vector<int> euler;
int first[1005];
int vis[1005];
vector< int > adj[1005];
int tree[4030];

int dfs(int u, int h){
	if(!vis[u]){
		vis[u]=1;
		first[u] = euler.size();
		euler.pb(u);
		heights[u]=h;
		for(int v=0; v<adj[u].size();v++){
			if(!vis[adj[u][v]]){
				dfs(adj[u][v], h+1);
				euler.pb(u);
			}
		}
	}
}

int build(int node, int start, int end){
	if(start == end)tree[node]=euler[start];
	else{
		int mid = (start + end)>>1;
		build(node<<1, start, mid);
		build(node<<1|1, mid+1, end);
		tree[node]=tree[node<<1];
		if(heights[tree[node<<1|1]] < heights[tree[node]]) tree[node] = tree[node<<1|1];
	}
}

int query(int node, int start, int end, int l, int r){
	if(l<=start && end<=r)return tree[node];
	int mid = (start+end)>>1;
	
	if(r<=mid)return query(node<<1, start, mid, l, r);
	if(l>mid) return query(node<<1|1, mid+1, end, l, r);

	int a = query(node<<1, start, mid, l, r);
	int b = query(node<<1|1, mid+1, end, l, r);
	if(heights[a]<heights[b])return a;
	else return b;
}

int lca(int u, int v){
	if(first[u]>first[v])swap(u,v);
	return query(1, 0, euler.size()-1, first[u], first[v]);
}

int main(){
	int t;
	cin>>t;
	int xx=0;
	while(t--){
		euler.resize(0);
		int n;

		cin>>n;
		
		for(int i=0;i<4*n+5;i++)heights[i]=1e6;
		for(int i=0;i<n;i++){
			int no;
			cin>>no;
			adj[i].resize(0);
			while(no--){
				int x;
				cin>>x;
				x--;
				adj[i].pb(x);
			}
		}
		dfs(0,1);
		build(1,0,euler.size()-1);
		int q;
		cin>>q;
		cout<<"Case "<<++xx<<":\n";
		while(q--){
			int u, v;
			cin>>u>>v;
			cout<<lca(u,v)<<"\n";
		}
		for(int i=0;i<=2*euler.size();i++){
			if((i&(i-1))==0)cout<<"\n";
			cout<<i<<":"<<tree[i]<<" ";
		}
	}
}