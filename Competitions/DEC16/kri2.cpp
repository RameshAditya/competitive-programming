#include <cstring>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;

const int maxn = 100010,maxm = 6000010;

int n,m,tot,ans;
int head[maxn];
int e[maxm],next[maxm];
int F[maxn],ok[maxn],vis[maxn];

void add(int i,int j)
{
    e[++tot] = j,next[tot] = head[i],head[i] = tot;
}

int main()
{
    int i,j,k;

    scanf("%d",&n);
    for (i = 1; i <= n; ++i)
        scanf("%d",&j),vis[j] = true;
    m = 100000;
    for (i = 2; i <= m; ++i)
        if (!ok[i])
        {
            if (vis[i]) k = i;
            else k = 0;
            for (j = i+i; j <= m; j += i)
            {
                ok[j] = true;
                if (vis[j]) 
                {
                    if (k) add(k,j);
                    k = j;
                }
            }
        }
    for (i = 1; i <= m; ++i)
        if (vis[i]) F[i] = 1;
    for (i = 1; i <= m; ++i)
        if (vis[i])
            for (j = head[i]; j; j = next[j])
            {
                k = e[j];
                F[k] = max(F[k],F[i]+1);
            }
    for (i = 1; i <= m; ++i)
        ans = max(ans,F[i]);
    printf("%d",ans);

    return 0;
}
