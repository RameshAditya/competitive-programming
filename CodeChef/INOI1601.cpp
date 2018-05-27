#include<bits/stdc++.h>
using namespace std;

#define SZ 112345

vector<int> par(SZ);
vector<int> A(SZ);
vector<int> dp(SZ, -1e9);

int solve(int node){
	if(node==-1)return -1e9 + 1;
	if(par[node]==-1)return dp[node] = 0;
	if(dp[node]!=-1e9)return dp[node];
	return dp[node] = max(dp[node], max(A[par[node]], solve(par[node])));
}

int main(){
	int res = -1e9 + 2;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>A[i];
	for(int i=1;i<=n;i++){
		cin>>par[i];
		if(par[i] == -1)dp[i] = A[i];
	}
	//cout<<"DP:\n";
	//for(int i=1;i<=n;i++)solve(i);
	//for(int i=1;i<=n;i++)cout<<dp[i]<<" ";
	//cout<<"\n\n";
	for(int i=1;i<=n;i++)if(par[i]!=-1)res = max(res, -A[i] + solve(i)); //, cout<<"At i:"<<i<<" res="<<res<<"and "<<solve(i)<<"\n";
	cout<<res<<"\n";
}
	
