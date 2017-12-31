#include <bits/stdc++.h>
using namespace std;

const int MAXN = 500100;

long long pop[MAXN];
int pr[MAXN];
int n, m, q;
bool active[MAXN];
int fr[MAXN], to[MAXN];

long long ans[MAXN];
char qur[MAXN][3];
int A[MAXN], B[MAXN], was[MAXN];

set<pair<long long, int>, greater< pair<long long, int> > >now;

int dsuFind(int x) {
    if (pr[x] == x) {
        return x;
    }
    int res = dsuFind(pr[x]);
    pr[x] = res;
    return res;
}

void unite(int x, int y) {
    x = dsuFind(x);
    y = dsuFind(y);
	if (x == y) {
        return ;
    }
    now.erase( make_pair(pop[x], x) );
    now.erase( make_pair(pop[y], y) );

    if (rand() & 1) {
        pr[x] = y;
        pop[y] += pop[x];
        now.insert( make_pair(pop[y], y) );
    }
    else {
        pr[y] = x;
        pop[x] += pop[y];
        now.insert( make_pair(pop[x], x) );
    }
}

long long getAns() {
    return (*now.begin() ).first;
}

int main() {
    scanf("%d%d%d", &n, &m, &q);
    for (int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        pop[i] = x;
        pr[i] = i;
    }
    for (int i = 1; i <= m; i++) {
        scanf("%d%d", &fr[i], &to[i]);
        active[i] = true;
    }
    for (int i = 1; i <= q; i++) {
        scanf("%s", qur[i]);
        if (qur[i][0] == 'D') {
            scanf("%d", &A[i]);
            active[ A[i] ] = false;
        }
        else {
            scanf("%d%d", &A[i], &B[i]);
            was[i] = pop[ A[i] ];
            pop[ A[i] ] = B[i];
        }
    }

    for (int i = 1; i <= n; i++) {
        now.insert( make_pair(pop[i], i) );
    }
    for (int i = 1; i <= m; i++) {
        if (active[i]) {
            unite(fr[i], to[i]);
        }
    }

    ans[q] = getAns();

    for (int i = q; i > 0; i--) {
        if (qur[i][0] == 'D') {
            unite( fr[ A[i] ], to[ A[i] ] );
        }
        else {
            int x = dsuFind(A[i]);
            now.erase( make_pair(pop[x], x) );
            pop[x] -= B[i];
            pop[x] += was[i];
            now.insert( make_pair(pop[x], x) );
        }
        ans[i - 1] = getAns();
    }

    for (int i = 1; i <= q; i++) {
        printf("%lld\n", ans[i]);
    }
    return 0;
}

