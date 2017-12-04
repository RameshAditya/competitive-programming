#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a>b)?a:b
int n;
int x[100005];
int h[100005];
int dp[100005][5];

int DP(int i, int prv){
	if(i==n)return 1;
	//0 none, 1 right, 2 left
	if(dp[i][prv]!=-1)return dp[i][prv];
	int xx=0, yy=0, zz=0, ww=0;
	
	if(prv==0){
		if(x[i]+h[i]<x[i+1])xx=1+DP(i+1,1);
		if(x[i]-h[i]>x[i-1])yy=1+DP(i+1,2);
		zz=DP(i+1,0);
	}
	
	if(prv==1){
		if(x[i]+h[i]<x[i+1])xx=1+DP(i+1,1);
		if(x[i]-h[i]>x[i-1]+h[i-1])yy=1+DP(i+1,2);
		zz=DP(i+1,0);
	}
	
	if(prv==2){
		if(x[i]+h[i]<x[i+1])xx=1+DP(i+1,1);
		if(x[i]-h[i]>x[i-1])yy=1+DP(i+1,2);
		zz=DP(i+1,0);
	}
	return dp[i][prv]=max(max(xx,yy),max(zz,ww));
}

int main(){
	std::ios_base::sync_with_stdio(false);
	memset(dp,-1,sizeof(dp));
	cin>>n;
	x[0]=-1e9 - 2;
	h[0]=1;
	x[n+1]=1e9+2;
	h[n+1]=1;
	for(int i=1;i<=n;i++)cin>>x[i]>>h[i];
	cout<<DP(1,0);
}
