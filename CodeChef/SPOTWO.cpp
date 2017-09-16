#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long int dp[600005];

long long int power(long long int x,long long int y){	
	long long int res=x;
	long long int tem=1;
	while(y){
		if(y&1){tem*=res;tem=tem%MOD;}
		res*=res;
		res=res%MOD;
		y>>=1;
	}
	return tem%MOD;
}

void pop(){
	dp[1]=2;
	dp[2]=1024;
	for(int i=3;i<600005;i++){
		long long int x=i&(-i);
		long long int y=i-x;
		if(y==0)dp[i]=power(dp[i/2],10);
		else dp[i]=(dp[x]*dp[y])%MOD;
	}
}

int main(){
	memset(dp,-1,sizeof(dp));
	pop();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%lld\n",(dp[n]*dp[n])%MOD);
	}
	return 0;
}
