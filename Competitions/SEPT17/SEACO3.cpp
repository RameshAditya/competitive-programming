#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
 
long long int n,q,lastquery,A[100005],que[100005][3],tree[4000020],lazy[4000020],lazylazy[4000020];
//lazy[] : tells me how much to add to each value in my array
//lazylazy[] : tells me how many times each query is being called

//Marks my lazy tree
long long int marklazy(long long int ind, long long int node, long long int start, long long int end, long long int val){
	if(que[ind][1]-1>end||que[ind][2]-1<start)return 0;
	if(que[ind][1]-1<=start && end<=que[ind][2]-1){
		lazy[node]=(lazy[node]%MOD+val%MOD)%MOD;
	}
	else{
		long long int mid=(start+end)>>1;
		marklazy(ind,node<<1,start,mid,val);
		marklazy(ind,node<<1|1,mid+1,end,val);
	}
}

//Marks my lazylazy tree
long long int marklazylazy(long long int ind, long long int node,long long int start, long long int end, long long int val){
	if(que[ind][1]-1>end||que[ind][2]-1<start);
	else if(que[ind][1]-1<=start && end<=que[ind][2]-1){
		lazylazy[node]=(lazylazy[node]%MOD+val%MOD)%MOD;
	}
	else{
		long long int mid=(start+end)>>1;
		marklazylazy(ind,node<<1,start,mid,val);
		marklazylazy(ind,node<<1|1,mid+1,end,val);
	}
}
 
//calls the appropriate mark function for a given query
long long int f(long long int ind){
	if(que[ind][0]==2)
		marklazylazy(ind,1,0,q-1,1);
	else
		marklazy(ind,1,0,n-1,1);
}

//adds into the array the value in the lazy tree
long long int querylazy(long long int node, long long int start, long long int end, long long int idx){
	if(start==end && start==idx && node<4*n){
		A[idx]=(A[idx]%MOD+lazy[node]%MOD)%MOD;
		lazy[node]=0;
	}
	else{
		if(node<2*n && lazy[node]!=0){
			lazy[node<<1]=(lazy[2*node]%MOD+lazy[node]%MOD)%MOD;
			lazy[node<<1|1]=(lazy[node<<1|1]%MOD+lazy[node]%MOD)%MOD;
			lazy[node]=0;
		}
		long long int mid=(start+end)>>1;
		if(start<=idx && idx<=mid)querylazy(node<<1,start,mid,idx);
		else querylazy(node<<1|1,mid+1,end,idx);
	}
}
 
//returns the number of times the query indexed 'idx' has been called
long long int querylazylazy(long long int node,long long int start, long long int end, long long int idx){
	if(start==end && start==idx)return lazylazy[node];
	if(lazylazy[node]!=0){
		lazylazy[node<<1]=(lazylazy[node<<1]%MOD+lazylazy[node]%MOD)%MOD;
		lazylazy[node<<1|1]=(lazylazy[node<<1|1]%MOD+lazylazy[node]%MOD)%MOD;
		lazylazy[node]=0;
	}
	if(start!=end){
		long long int mid=(start+end)>>1;
		if(start<=idx && idx<=mid)querylazylazy(node<<1,start,mid,idx);
		else querylazylazy(node<<1|1,mid+1,end,idx);
	}
}
 
int main(){
	long long int t;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&n,&q);
		for(long long int i=0;i<n;i++)A[i]=0;
		for(long long int i=0;i<4*max(n,q);i++){lazy[i]=0;tree[i]=0;lazylazy[i]=0;}
		
		for(long long int q0=0;q0<q;q0++){
			long long int x,y,z;
			scanf("%lld%lld%lld",&x,&y,&z);
			que[q0][0]=x;
			que[q0][1]=y;
			que[q0][2]=z;
			//mark appropriate tree
			f(q0);
		}
		
		//the good part
		for(long long int i=q-1;i>=0;i--){
			if(que[i][0]==2){
				//if the query is of type 2, then mark the range of queries it wants to re-execute in the lazylazy tree
				marklazylazy(i,1,0,q-1,querylazylazy(1,0,q-1,i));
			}
			else if(que[i][0]==1){
				//if the query is of type 1, then add the number of times it's been called into the corresponding range in the lazy tree
				marklazy(i,1,0,n-1,querylazylazy(1,0,q-1,i));
			}
		}
		
		for(long long int i=n-1;i>=0;i--)
			//clear the lazy tree into the initial array
			querylazy(1,0,n-1,i);
		
		//voila!
		for(long long int i=0;i<n;i++)printf("%lld ",A[i]);
		printf("\n");
	}
}

//Total times I banged my head for this: 21
