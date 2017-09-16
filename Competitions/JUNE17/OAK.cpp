#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	long long int parent[100005];
	long long int maxwt[100005];
	long long int initwt[100005];
	int n,m;
	while(t--){
		scanf("%d%d",&n,&m);
		int p,w;
		for(int i=0;i<n;i++){
			scanf("%lld%lld",&p,&w);
			parent[i]=p-1;
			maxwt[i]=w;
			initwt[i]=0;
		}
		while(m--){
			long long int state,q,u,x;
			scanf("%lld",&state);
			scanf("%lld",&q);
			if(q==1){
				if(state==0)for(int i=0;i<n;i++)initwt[i]=0;
				scanf("%lld%lld",&u,&x);
				u--;
				long long int i=u;
				initwt[i]+=x;
				long long int curwt=0;
				long long int ans=-1;
				while(i!=-1){
					if(curwt+initwt[i]>maxwt[i]){
						ans=i;
						break;
					}
					curwt+=initwt[i];
					//if(parent[i]==-1)break;
					i=parent[i];
				}
				printf("%lld\n",ans+1);
			}
		}
	}
} 
