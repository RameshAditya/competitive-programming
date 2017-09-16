#include<bits/stdc++.h>
using namespace std;
#define min(a,b) (a<b)?a:b
long long int dp[10005];
int main(){
	int n;
	scanf("%d",&n);
	dp[0]=0LL;
	dp[1]=0LL;
	for(long long int i=2;i<=10000;i++){
		long long int k=dp[i-1];
		if(i%2==0)k=min(k,dp[i/2]);
		if(i%3==0)k=min(k,dp[i/3]);
		dp[i]=1+min(dp[i-1],k);
	}
	while(n--){
		int x;
		scanf("%d",&x);
		printf("%lld\n",dp[x]);
	}
}
