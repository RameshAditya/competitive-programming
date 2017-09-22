#include<bits/stdc++.h>
using namespace std;
long long dp[1000005];
long long  A[1000005];
int t,n,x;
int main(){
	scanf("%d",&t);
	while(t--){
		memset(dp,0,sizeof dp);
		scanf("%d",&n);
		for(int i=0;i<n;i++){scanf("%lld",&A[i]);dp[A[i]]++;}
		long long res=0;
		for(int i=0;i<n;i++)res-=dp[A[i]]*(dp[A[i]]-1)/2;
		for(int i=0;i<20;i++)
			for(int j=0;j<1000005;j++)
				if(j & (1<<i) )dp[j]+=dp[j ^ (1<<i)];
		for(int i=0;i<n;i++)res+=dp[A[i]]-1;
		printf("%lld\n",res);
	}
}
