#include<bits/stdc++.h>
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
int min_ans=(1<<30),max_ans=0;
using namespace std;
class Graph{
    int V;
    list<int> *adj;
    void printAllPathsUtil(int , int , bool [], int [], int &, int, map<int,map<int,int> >);
public:
    Graph(int V);
    void addEdge(int u, int v);
    void printAllPaths(int s, int d,int k, map<int,map<int,int> > );
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int src, int dest){
    adj[src].push_back(dest);
}

void Graph::printAllPaths(int s, int d,int k, map<int,map<int,int> > kmap){
    bool *visited = new bool[V];
    int *path = new int[V];
    int path_index = 0;
    for (int i = 0; i < V; i++)
        visited[i] = false;
        
    printAllPathsUtil(s, d, visited, path, path_index, k, kmap);
}

void Graph::printAllPathsUtil(int u, int d, bool visited[], int path[], int &path_index,int k,map<int,map<int,int> > kmap){
    visited[u] = true;
    path[path_index] = u;
    path_index++;
    printf("Entered: ");
    printf("Destination is %d\n", d);
    if (u == d){
    	printf("Found: ");
    	printf("%d ",path[0]);
        for (int i = 1; i<path_index; i++)
            {
            	printf("%d ",path[i]);
            	printf("kmap[i-1][i]^k = %d\n",kmap[i-1][i]^k);
            	min_ans=min(min_ans,kmap[i-1][i]^k);
				max_ans=max(max_ans,kmap[i-1][i]^k);	
            }
        cout << endl;
    }
    else{
        list<int>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
            if (!visited[*i])
                printAllPathsUtil(*i, d, visited, path, path_index,k,kmap);
    }
    path_index--;
    visited[u] = false;
}

int main(){
	map<int,map<int,int> > kmap;
	int key,n,q,r,u,v,t,k;
	//int min_ans,max_ans;
	scanf("%d%d",&n,&q);
	scanf("%d%d",&r,&key);
	Graph g(n);
	for(int i=0;i<n-1;i++){
		scanf("%d%d%d",&u,&v,&k);	//v to u, addEdge(src,dest)
		g.addEdge(v,u);
		kmap[v][u]=k;	
	}
	int last_ans=0;
	
	for(int qq=0;qq<q;qq++){
		scanf("%d",&t);
		t^=last_ans;
		if(t==0){
			scanf("%d%d%d",&v,&u,&k);	//u to v
			u^=last_ans;
			v^=last_ans;
			k^=last_ans;
			kmap[u][v]=k;
			g.addEdge(u,v);
		}
		else{
			scanf("%d%d",&v,&k);
			v^=last_ans;
			k^=last_ans;
			g.printAllPaths(v,r,k,kmap);
			printf("OP:%d %d\n",min_ans,max_ans);
			min_ans=(1<<30);
			max_ans=0;
		}
	}
}
