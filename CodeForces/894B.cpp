#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007ll

inline ll qmul(ll a, ll b){
	ll res = 1, tp = a;
	while(b){
		if(b&1ll){
			res *= tp;
			res %= mod;
		}
		tp *= tp;
		tp %= mod;
		b >>= 1ll;
	}
	return res;
}

int main(){
	ll n, m;
	int k;
	cin >> n >> m;
	cin >> k;
	
	if(((n+m)&1ll) && (k==-1))cout<<"0\n";
	else cout << qmul(qmul(2ll, n-1), m-1);
}
