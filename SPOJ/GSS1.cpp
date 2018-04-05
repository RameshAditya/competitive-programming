#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll tree[1000];
ll A[1000];
const ll INF = 1e9;

ll build(ll node, ll start, ll end){
	if(start==end)tree[node]=A[start];
	else{
		ll mid = (start + end)>>1;
		build(node<<1, start, mid);
		build(node<<1|1, mid+1, end);
		tree[node] = max( max(tree[node<<1], tree[node<<1|1]), tree[node<<1] + tree[node<<1|1]);
	}
}

ll query(ll node, ll start, ll end, ll l, ll r){
	if(r<start||l>end)return -INF;
	if(l<=start && end<=r)return tree[node];
	else{
		ll mid = (start + end)>>1;
		ll a = query(node<<1, start, mid, l, r);
		ll b = query(node<<1|1, mid+1, end, l, r);
		return max( max(a, b), a+b);
	}
}

int main(){
	ll n;
	cin>>n;
	for(ll i=0;i<n;i++)cin>>A[i];
	build(1,0,n-1);
	ll q;
	cin>>q;
	while(q--){
		ll s, e;
		cin>>s>>e;
		cout<<query(1,0,n-1,s-1,e-1)<<"\n";
	}
}
