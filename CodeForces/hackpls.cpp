#include <iostream>

using namespace std;

int n,v[100005],rez,r1,r2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n; r2=1000000;
    for(int i=1;i<=n;++i) cin>>v[i];

    for(int i=1;i<=n;++i)
    {
        if(v[i]<=500000) r1=v[i];
        else if(r2==1000000) r2=v[i];
    }
    rez=max(r1-1,1000000-r2);
    cout<<rez;
    return 0;
}
