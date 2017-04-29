#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int n,w;
		scanf("%d %d",&n,&w);
		int dp[n+1][w+1];
		int c[n];
		int p[n];
		int t[n];
		for(int i=0;i<n;++i)scanf("%d %d %d",c+i,p+i,t+i);
		
		for(int i=0;i<=n;++i)
			for(int j=0;j<=w;++j)
				if(i==0||j==0)
					dp[i][j]=0;
				else if(t[i-1]<=j)
					dp[i][j]=max(dp[i-1][j],dp[i-1][j-t[i-1]]+c[i-1]*p[i-1]);
				else
					dp[i][j]=dp[i-1][j];
		printf("%d\n",dp[n][w]);
	}
}
