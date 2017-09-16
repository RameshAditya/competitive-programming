#include<bits/stdc++.h>
using namespace std;
long long int A[25];
int dp[10][(1<<21)+5];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		long long int sum=0;
		for(int i=0;i<n;i++){scanf("%lld",&A[i]);sum+=A[i];}
		for(int i=0;i<=k;i++)for(int j=0;j<(1<<n);j++)dp[i][j]=0;
		if(n<k||sum%k!=0){printf("no\n");continue;}
		if(sum==0){printf("yes\n");continue;}
		long long int x=sum/k;
		dp[0][0]=1;
		for(int curk=0;curk<k;curk++){
			for(int curmask=0;curmask<(1<<n);curmask++){
				if(!dp[curk][curmask])continue;
				sum=0;
				for(int i=0;i<n;i++)if(curmask&(1LL<<i))sum+=A[i];
				sum-=curk*x;
				for(int i=0;i<n;i++){
					if(curmask&(1LL<<i))continue;
					else{
						long long int newmask=curmask|(1LL<<i);	
						if(sum+A[i]==x)dp[curk+1][newmask]=1;
						if(sum+A[i]<x)dp[curk][newmask]=1;
						}
					}
				}
			}
		(dp[k][(1LL<<n)-1]==1)?printf("yes\n"):printf("no\n");
		}		
	
}
