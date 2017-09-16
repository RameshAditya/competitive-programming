#include<bits/stdc++.h>
using namespace std;
long long int dp[3005][3005];
long long int A[3005];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,b,c;
		scanf("%d%d%d",&n,&b,&c);
		for(int i=0;i<n;i++)scanf("%lld",&A[i]);
		sort(A,A+n);
		for(int i=0;i<n;i++)for(int j=0;j<=b;j++)dp[i][j]=INT_MAX;
		for(int i=0;i<n;i++)dp[i][1]=(A[i]-A[n-1])*(A[i]-A[n-1]);
		
		/*for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				for(int k=2;k<=b;k++){
					dp[i][k]=min(dp[i][k],(A[j]-A[i])*(A[j]-A[i]) + dp[j][k-1]);
				}
			}
		}*/
		for(int i=n-1;i>=0;i--){
			for(int j=n-1;j>i;j--){
				for(int k=2;k<=b;k++){
					dp[i][k]=min(dp[i][k],(A[j]-A[i])*(A[j]-A[i]) + dp[j][k-1]);
				}
			}
			//for(int k=b;k<n;k++)dp[i][k]=dp[i][b];
		}
		/*for(int i=0;i<n;i++){
			for(int j=0;j<=b;j++)printf("%d ",dp[i][j]);
			printf("\n");
		}*/
		b=min(n-1,b);
		printf("%lld\n",dp[0][b]);
	}
}
