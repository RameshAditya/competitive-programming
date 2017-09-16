#include<bits/stdc++.h>
using namespace std;
int dp[3005][3005];
int A[3005];
int main(){
	int t;
	scanf("%d",&t);
	int n,b,c;
	scanf("%d%d%d",&n,&b,&c);	
	for(int i=0;i<=n;i++)for(int j=0;j<=b;j++)//if(i==0||j==0)dp[i][j]=0;else 
	if(j!=1)dp[i][j]=99999999;
	else dp[i][1]=(A[i]-A[0])*(A[i]-A[0]);
	for(int i=0;i<n;i++)scanf("%d",&A[i]);
	sort(A,A+n);
	c--;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			for(int k=2;k<=i;k++){
				dp[i][k]=min(dp[i][k],(A[i]-A[j])*(A[i]-A[j]) + dp[j][k-1]);
				printf("dp[%d][%d]=%d at i: %d,j: %d,k: %d\n",i,k,dp[i][k],i,j,k);
			}
		}
		for(int j=i;j<n;j++)dp[i][j]=dp[i][i-1];
	}
	for(int i=0;i<n;i++)printf("%d ",dp[i][1]);
}

//Changed line 17 from k=0 to k=1
