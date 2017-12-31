#include<bits/stdc++.h>
using namespace std;
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
int tree[8005], A[2005], ans[2005];

int build(int node, int start, int end){
	if(start==end)tree[node]=A[start];
	else{
		int mid=(start+end)>>1;
		build(node<<1,start,mid);
		build(node<<1|1,mid+1,end);
		tree[node]=min(tree[node<<1],tree[node<<1|1]);
	}
}

int main(){
	int n;
	std::ios_base::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++)cin>>A[i];
	build(1,0,n-1);
	int ct=1;
	int i=1;
	int x=n-1;
	while(i<2*n){
		int temp=ct;
		int cur=A[i];
		while(temp--){
			cur=max(A[i],cur);
			cout<<i<<" ";
			i++;
			
		}
		ct*=2;
		cout<<"\n";
		ans[x--]=cur;
	}
	for(int i=0;i<n;i++)cout<<ans[i]<<" ";
}
