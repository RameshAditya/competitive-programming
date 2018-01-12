#include<bits/stdc++.h>
using namespace std;

int tree[400005];
int A[100005];

int build(int node, int start, int end){
	if(start==end){
		tree[node]=A[start];
	}
	else{
		int mid=(start+end)>>1;
		build(2*node, start, mid);
		build(2*node + 1, mid+1, end);
		tree[node]=tree[node<<1] * tree[node<<1|1];	
	}
}

int query(int node, int start, int end, int l, int r){
	if(r<start||l>end)return 1;
	if(l<=start && end<=r)return tree[node];
	else{
		int mid=(start+end)>>1;
		int a = query(2*node, start, mid, l, r);
		int b = query(2*node+1, mid+1,end, l, r);
		return a*b;
	}
}

int update(int node, int start, int end, int idx, int val){
	if(start==end && start==idx){
		tree[node]=val;
		A[idx]=val;
	}
	else{
		int mid=(start+end)>>1;
		if(start<=idx && idx<=mid)
			update(2*node, start, mid, idx, val);
		else 
			update(2*node + 1, mid+1, end, idx, val);
		tree[node]=tree[node<<1]*tree[node<<1|1];
	}
}

int main(){
	int n,k;
	while(scanf("%d %d", &n, &k) != EOF){
		for(int i=0;i<n;i++)scanf("%d",&A[i]);
		build(1, 0, n-1);
		string val="";
		while(k--){
			string type;
			int i,j;
			cin>>type;
			//scanf("%c",&type);
			if(type=="P"){
				scanf("%d %d", &i, &j);
				int res = query(1, 0, n-1, i-1, j-1);
				if(res>0)val+="+"; //printf("+");
				else if(res==0)val+="0"; //printf("0");
				else if(res<0) val+="-"; //printf("-");
			}
			
			else{
				scanf("%d %d", &i, &j);	
				update(1, 0, n-1, i-1, j);
			}
		}
		cout<<val;
		printf("\n");
	}
}
