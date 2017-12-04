#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
int par[5000];
int arr[5000];
int sz[5000];

int find(int i){
	return par[i]=(par[i]==i)?i:find(par[i]);
}

int main(){
	int n,m;
	std::ios_base::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=0;i<1001;i++)par[i]=i,sz[i]=1;
	int x,y;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		par[find(x)]=find(y);
	}
	long long int res=1LL<<n;
	for(int i=1;i<=n;i++)(par[i]==i)?res=res/2:res=res;
	cout<<res;
}
