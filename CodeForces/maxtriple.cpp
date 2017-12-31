#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a>b)?a:b
int main(){
	int n;
	scanf("%d",&n);
	int A[200005];
	long long int dp[200005];
	for(int i=0;i<n;i++)scanf("%d",&A[i]),dp[i]=0;
	dp[0]=A[0];
	if(1<n)dp[1]=A[0]+A[1];
	if(2<n)dp[2]=A[2]+max(dp[0],dp[1]);
	for(int i=3;i<n;i++)dp[i]=max(dp[i-1],max(A[i]+dp[i-2],A[i]+A[i-1]+dp[i-3]));
	printf("%lld\n",dp[n-1]);
}
	
