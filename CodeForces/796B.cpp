#include<bits/stdc++.h>

using namespace std;

const int maxn = 1e6+100;
int vis[maxn];

int main(){
	int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    memset(vis,0,sizeof(vis));
    for(int i=0;i<m;i++)
    {
        int x;
        scanf("%d",&x);
        vis[x] = -1;
    }
    int ans = 1;
    if(vis[1]==-1);
    else
        vis[1] = 1;
    while(k--)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        if(ans==u && vis[u]!=-1)
        {
            if(vis[v]!=-1)
                swap(vis[u],vis[v]);
            ans = v;
        }
        else if(ans==v && vis[v]!=-1)
        {
            if(vis[u]!=-1)
                swap(vis[v],vis[u]);
            ans = u;
        }
    }
    printf("%d\n",ans);
    return 0;
}
