#include<bits/stdc++.h>
using namespace std;
#define min(a,b) (a<b)?a:b

int cost[100005], par[100005];

int find(int x){ 
	return par[x]=(par[x]==x)?x:find(par[x]);
}
int join(int x, int y){
	if(cost[find(x)]<cost[find(y)]){
		par[find(y)]=find(x);
	}
	else{
		par[find(x)]=find(y);	
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){cin>>cost[i];par[i]=i;}
	
	for(int i=0;i<m;i++){
		int st, en;
		cin>>st>>en;
		join(st-1,en-1);
	}
	long long int res=0;
	
	for(int i=0;i<n;i++)find(i);
	
	for(int i=0;i<n;i++){
		if(find(i)==i)res+=cost[i];
	}
	cout<<res;
}
