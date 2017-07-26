#include<bits/stdc++.h>
#define MAX 1000000000
using namespace std;
int visited[100001];
vector<vector<pair<int,int> > > G(100001);
int n;


int DFS(int prev,int i,int dest,int ans, int k){
    int j;
    //printf("curr: %d dest: %d %t",i+1,dest+1);
    if(prev!=i && G[prev][i].second<=k)ans=ans^G[prev][i].second;
    if(i==dest)printf("%d\n",ans);
    else{
		visited[i]=1;
    	for(j=0;j<G[i].size();j++)
        	if(G[i][j].second>=1&&!visited[G[i][j].first])
            	DFS(i,G[i][j].first,dest,ans,k);
	}
}


int re(int val){
	for(int i=0;i<100001;i++)visited[i]=val;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		//re(MAX);
		int u,v,c;
		for(int i=0;i<n-1;i++){
			scanf("%d%d%d",&u,&v,&c);
			G[u-1].push_back(make_pair(v-1,c));
			G[v-1].push_back(make_pair(u-1,c));
		}
		//for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(G[i][j])printf("i:%d j:%d G[i][j]:%d\n",i,j,G[i][j]);
		int m;
		scanf("%d",&m);
		while(m--){
			int a,b,k;
			re(0);
			scanf("%d%d%d",&a,&b,&k);
			DFS(a-1,a-1,b-1,0,k);
			//printf("%d\n",DFS(a-1,a-1,b-1,0,k));
		}
	}
}
