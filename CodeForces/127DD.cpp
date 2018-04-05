
#include <iostream>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <ctime>
#include <cassert>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <set>
#include <map>
#include <list>
#include <bitset>
#include <queue>
#include <deque>

using namespace std;

#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define for1(i, n) for(int i = 1; i <= int(n); ++i)
#define ford(i, n) for(int i = int(n)-1; i >= 0; --i)
#define fore(i, l, r) for(int i = int(l); i < int(r); ++i)
#define X first
#define Y second
#define sz(v) int((v).size())
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define mp make_pair

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

const int INF = int(1e9)+7;
const ld EPS = 1E-9;
const ld PI = acos(-1.0);

template<class X> X abs(X a){ return (a < 0) ? (-a) : (a); }
template<class X> X sqr(X a){ return a*a; }

const int N = 1000100;

int n;
char s[N];
int z[N];

int prefMax[N];

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    gets(s);
    n = strlen(s);

    if(n < 3){
        puts("Just a legend");
        return 0;
    }

    prefMax[0] = 0;

    int lf = 0, rg = 0;
    for(int i = 1; i < n; ++i){
        if(i <= rg)
            z[i] = min(rg - i + 1, z[i - lf]);
        while(i + z[i] < n && s[z[i]] == s[i + z[i]])
            z[i]++;
        if(i + z[i] - 1 > rg){
            lf = i;
            rg = i + z[i] - 1;
        }

        prefMax[i] = max(prefMax[i - 1], z[i]);
    }

    int ln = 0;

    ford(i, n){
        if(z[i] != n - i)
            continue;

        if(prefMax[i - 1] >= z[i])
            ln = max(ln, z[i]);
    }

    if(ln == 0){
        puts("Just a legend");
        return 0;
    }

    forn(i, ln)
        printf("%c", s[i]);
    puts("");

    return 0;
}
