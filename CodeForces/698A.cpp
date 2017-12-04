#include <bits/stdc++.h>
#define SZ(x) (int)x.size()
#define X first
#define Y second
const int SZ=1e2+5;
const int mod=1e9+7;
typedef long long ll;
const ll oo=(1LL<<62);
const double PI=acos(-1);
const int dx4[]={0,0,1,-1};
const int dy4[]={-1,1,0,0};
const int dx8[]={0,0,1,-1,1,-1,1,-1};
const int dy8[]={-1,1,0,0,1,-1,-1,1};
using namespace std;

int n,a[SZ];
int dp[SZ][5];

int DP(int i,int prv)
{
	if(i==n)
		return 0;
	if(dp[i][prv]!=-1)
		return dp[i][prv];
	
	int ch1=2e9, ch2=2e9, ch3=2e9, ch4=2e9;
	
	if(prv==1)
	{
		if(a[i]==2||a[i]==3) 
			ch1=DP(i+1,2);
		else
			ch2=DP(i+1,0)+1;
	}
	else
	if(prv==2)
	{
		if(a[i]==1||a[i]==3) 
			ch1=DP(i+1,1);
		else
			ch2=DP(i+1,0)+1;
	}
	else
	{
		if(a[i]==1)
			ch1=DP(i+1,1);
		else
		if(a[i]==2)
			ch2=DP(i+1,2);
		else
		if(a[i]==3)
			ch3=min(DP(i+1,1),DP(i+1,2));
		else
			ch4=DP(i+1,0)+1;
	}

	return dp[i][prv]=min(min(ch1,ch4),min(ch2,ch3));
}

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",a+i);
	
	memset(dp,-1,sizeof dp);
	cout<<DP(0,0);
}
