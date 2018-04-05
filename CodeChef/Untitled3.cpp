#include<bits/stdc++.h>
using namespace std;

int tree[1000];

int build(int node, int start, int end){
	if(start==end)tree[node]=A[start];
	else{
		int mid = (start + end)>>1;
		build(node<<1, start, mid);
		build(node<<1|1, mid+1, end);
		tree[node] = max( max(tree[node<<1], tree[node<<1|1]), tree[node<<1] + tree[node<<1|1]);
