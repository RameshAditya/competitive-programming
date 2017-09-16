#include<bits/stdc++.h>

using namespace std;

int main(){
	int s,n;
	scanf("%d %d",&s,&n);
	vector<int> w(n),val(n);
	int dp[n+1][s+1]={0};
	for(int i=0;i<n;i++){
		scanf("%d %d",&w[i],&val[i]);
	}
	
	for(int i=0;i<=n;++i)
		for(int j=0;j<=s;++j)
			if(i==0||j==0)
				dp[i][j]=0;
			else if(w[i-1]<=j)
				dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-w[i-1]]);
			else
				dp[i][j]=dp[i-1][j];
	printf("%d\n",dp[n][s]);
}
