#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, a[300000];
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);

    long long result(0);
    for (int i = 0; i < n; ++i)
    {
        result += abs(i + 1 - a[i]);
    }
    printf("%I64d", result);

    return 0;
}
