#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a>b)a:b
int dp[1005][1005];
char inp[1005][1005];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int si, sj;
		for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){
			cin>>inp[i][j];
			if(inp[i][j]=='K')si=i,sj=j;
		}
		for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)dp[i][j]=0;
		
		for(int i=si;i<=n;i++){
			for(int j=sj;j<=n;j++){
				if(inp[i][j]!='P'){
					dp[i][j]= (dp[i][j]>dp[i-1][j])?dp[i][j]:dp[i-1][j];
					dp[i][j]= (dp[i][j]>dp[i][j-1])?dp[i][j]:dp[i][j-1];
				}
				if(inp[i][j]=='P'){
					if(i-2>=0 && j-1>=0)dp[i][j]=(dp[i][j] > (inp[i-2][j-1]=='K')+dp[i-2][j-1])?;
					if(i-1>=0 && j-2>=0)dp[i][j]=max(dp[i][j], (inp[i-1][j-2]=='K')+dp[i-1][j-2]);
				}
			}
		}
		
		int mx=0;
		for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)mx=max(mx, dp[i][j]);
		cout<<mx<<"\n";
	}
}
