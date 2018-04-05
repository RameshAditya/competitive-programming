#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <sstream>
#include <string.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define for1(i, n) for (int i = 1; i <= int(n); i++)
#define forv(i, v) forn(i, v.size())

#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

#define CIN_FILE "input.txt"
#define COUT_FILE "output.txt"

#define pi 3.1415926535897932

typedef pair<int, int> pii;
typedef long long ll;
typedef long double ld;

#define NMAX 1000006

char s[NMAX];
int z[NMAX];

void calc_z()
{
    int n = (int)strlen(s);

    int l = 0, r = 0;
    for1(i, n)
    {
        if (i < r)
        {
            z[i] = min(z[i - l], r - i);
        }
        while (i + z[i] < n && s[z[i]] == s[i + z[i]]) ++z[i];
        if (i + z[i] > r)
        {
            l = i;
            r = i + z[i];
        }
    }
}

int main()
{
  

    gets(s);
    calc_z();

    int n = (int)strlen(s);

    int len = 0;

    for1(i, n - 1)
    {
        if (i + z[i] < n)
        {
            len = max(len, z[i]);
        }
        else
        {
            len = max(len, z[i] - 1);
        }
    }

    for1(i, n - 1)
    {
        if (i + z[i] == n)
        {
            if (len >= z[i])
            {
                s[z[i]] = 0;
                puts(s);
                return 0;
            }
        }
    } 

    cout << "Just a legend\n";
    return 0;
}
