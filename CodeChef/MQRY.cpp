#include<bits/stdc++.h>
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
long int tree[2][200005];
long int A[100005];
//tree[0] = max, tree[1] = min
void buildmax(int node, int start, int end){
	if(start==end)
		tree[0][node]=A[start];
	else{
		int mid=start+(end-start)/2;
		buildmax(2*node,start,mid);
		buildmax(2*node+1,mid+1,end);
		tree[0][node]=max(tree[0][node<<1],tree[0][node<<1|1]);
	}
}

void buildmin(int node, int start, int end){
	if(start==end)
		tree[1][node]=A[start];
	else{
		int mid=start+(end-start)/2;
		buildmin(2*node,start,mid);
		buildmin(2*node+1,mid+1,end);
		tree[1][node]=min(tree[1][node<<1],tree[1][node<<1|1]);
	}
}

long int querymax(int node, int start, int end, int l, int r){
	if(l>end||r<start) return -1;
	if(start>=l && end<=r)return tree[0][node];
	else{
		int mid=start+(end-start)/2;
		long int p1=querymax(node<<1,start,mid,l,r);
		long int p2=querymax(node<<1|1,mid+1,end,l,r);
		return max(p1,p2);
	}
}

long int querymin(int node, int start, int end, int l, int r){
	if(l>end||r<start) return 1000000000;
	if(start>=l && end<=r)return tree[1][node];
	else{
		int mid=start+(end-start)/2;
		long int p1=querymin(node<<1,start,mid,l,r);
		long int p2=querymin(node<<1|1,mid+1,end,l,r);
		return min(p1,p2);
	}
}

int main(){
	int n,q;
	scanf("%d%d",&n,&q);
	for(int i=0;i<n;i++)scanf("%d",&A[i]);
	buildmax(1,0,n-1);
	buildmin(1,0,n-1);
	while(q--){
		int l,r;
		scanf("%d%d",&l,&r);
		printf("%ld\n",querymax(1,0,n-1,l,r)-querymin(1,0,n-1,l,r));
	}
	return 0;
}
