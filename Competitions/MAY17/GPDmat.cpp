#include<bits/stdc++.h>
using namespace std;
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
int *path;
int path_index=0;
int min_ans=(1<<20);
int max_ans=0;
class Graph{
	int vertex,edge;
	int **a;int *visited;
	public:
		Graph(int ver){ //,int edg){
			vertex=ver;
			//edge=edg;
			a=new int*[ver];
			
			for(int i=0;i<ver;i++){
				a[i]=new int[ver];
			}
			visited=new int[ver];
			for(int i=0;i<ver;i++){
				visited[i]=0;
			}
		} 
		
		bool create_graph(){
			for(int i=0;i<vertex;i++){
				int u,v,k;
				scanf("%d%d%d",&u,&v,&k);
				a[v][u]=k;
				a[u][v]=-k;
			}
		}
		void update(int u,int v,int k){
			a[u][v]=k;
			a[v][u]=-k;
		}
		void dfs(int src, int node, int dest, int k){
			visited[node]=1;
			int i;
			if(node==dest){
				printf("%d is src and %d is dest",src,dest);
				cout<<"printing path taken: ";
				path[0]=src;
				for(i=0;i<=path_index;i++)
					cout<<path[i]<<" ";
				cout<<endl;
				//cout<<"Path index: "<<path_index<<" Actual path: ";
				for(i=1;i<=path_index;i++){
					cout<<path[i]<<" ";
					printf("Cur value = %d and xored = %d\n",a[path[i-1]][path[i]],a[path[i-1]][path[i]]^k);
					min_ans=min(min_ans,a[path[i]][path[i-1]]^k);
					max_ans=max(max_ans,a[path[i]][path[i-1]]^k);
				}
				printf("min ans = %d max ans = %d\n",min_ans,max_ans);
			}
			else{
				for(i=0;i<vertex;i++){
					if(a[node][i]>0 && !visited[i]){
				//	cout<<a[i][node]<<" ";
				//	cout<<i<<" "<<node<<endl;
				//	cout<<node<<" ";
						path[++path_index]=i;
						dfs(src,i,dest,k);
						path[path_index--]=-1;	
					}
				}
			}
		}
};

int main(){
	int n,q;
	scanf("%d%d",&n,&q);
	Graph g(n);
	int r,key;
	scanf("%d%d",&r,&key);
	path = new int[n];
	path_index=0;
	for(int i=0;i<n;i++)path[i]=-1;
	g.create_graph();
	int last_ans=0;
	int v,u,k;
	while(q--){
		int t;
		scanf("%d",&t);
		t^=last_ans;
		if(t==0){
			
			scanf("%d%d%d",&v,&u,&k);	//u to v
			u^=last_ans;
			v^=last_ans;
			k^=last_ans;
			g.update(u,v,k);
		}
		else{
			scanf("%d%d",&v,&k);
			v^=last_ans;
			k^=last_ans;
			g.dfs(v,v,r,k);
			printf("OP:%d %d\n",min_ans,max_ans);
			min_ans=(1<<20);
			max_ans=0;
		}
	}
}
