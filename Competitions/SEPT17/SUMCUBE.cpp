#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long int n,m,k,res,vis[500000];
long long int power(long long int x, long long int k){
	long long int final=1;long long int temp=x;
	while(k){
		if(k&1){final=(final%MOD*temp%MOD)%MOD;}
		temp=(temp%MOD * temp%MOD)%MOD;
		k>>=1;
	}
	return final%MOD;
}

long long int calcedges(long long int node, long long int mask,vector<vector<long long int> > adj){
	if(!vis[node]){
		vis[node]=1;
		long long int totedges=0;
		for(long long int i=0;i<adj[node].size();i++)
			if(mask&(1<<adj[node][i])){
				//printf("Going from %lld to %lld\n",node+1,adj[node][i]+1);
				totedges=(totedges+1+calcedges(adj[node][i],mask,adj))%MOD;
			}
		return totedges%MOD;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		res=0;
		scanf("%lld%lld%lld",&n,&m,&k);
		vector<vector<long long int> > adj(n);
		
		//for(long long int i=0;i<n;i++)for(long long int j=0;j<n;j++)adj[i][j]=0;
		for(long long int M=0;M<m;M++){
			long long int u,v;
			scanf("%lld%lld",&u,&v);
			adj[u-1].push_back(v-1);
			adj[v-1].push_back(u-1);
		}
		
		for(long long int i=0;i<(1<<n);i++){
			long long int temp=0;
			for(int j=0;j<n;j++)vis[j]=0;//{for(int jj=0;jj<n;jj++)vis[jj]=0;if(i&(1<<j))res+=calcedges(j,i);}
			int j;
			for(j=0;j<n;j++)
				if(i&(1<<j))
					temp=(temp%MOD + calcedges(j,i,adj)%MOD)%MOD;
			res+=power((temp>>1),k);
			res%=MOD;
			//printf("At mask: %lld, res=%lld\n",i,res);
		}
		printf("%lld\n",res);
	}
}
