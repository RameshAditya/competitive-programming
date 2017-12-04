#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007ll
using namespace std;
inline ll qmul(ll a,ll b)
{ll res=1,tp=a;
while (b)
{if (b&1ll) {res*=tp;res%=mod;}
tp*=tp;tp%=mod;b>>=1ll;
}
return res;
}
int main (){
	ll n,m;
	int k;
	scanf ("%lld%lld%d",&n,&m,&k);
	if (((n+m)&1ll)&&(k==-1)) {puts("0");return 0;}
	printf ("%lld\n",qmul(qmul(2ll,n-1),m-1));
	return 0;
}
