#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	char a[1005][1005];
	int dp[2][1005][1005];
	while(t--){
		int ok=1;
		int res=0;
		
		int n;
		scanf("%d",&n);
		
		for(int i=0;i<n;++i)for(int j=0;j<n;++j)scanf("%c",&a[i][j]);
		
		for(int i=0;i<n;++i){
			ok=1;
			for(int j=n-1;j>=0;j--){
				if(a[i][j]=='#')ok=0;
				dp[0][i][j]=ok;
			}
		}
		
		for(int i=0;i<n;++i){
			ok=1;
			for(int j=n-1;j>=0;j--){
				if(a[j][i]=='#')ok=0;
				dp[1][i][j]=ok;
			}
		}
		
		for(int i=0;i<n;++i)for(int j=0;j<n;++j)res+=dp[0][i][j]&&dp[1][i][j];
		printf("%d\n",res);
	}
	return 0;
}
