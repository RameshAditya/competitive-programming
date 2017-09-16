#include<bits/stdc++.h>
#define max(a,b) (a>b)?a:b
using namespace std; 
int tree[2000005], dp[2000005]; 
int build(int node,int start,int end){
	if(start==end)
		tree[node]=dp[start];
	else{int mid=start+(end-start)/2;
		build(node<<1,start,mid);
		build(node<<1|1,mid+1,end);
		tree[node]=max(tree[node<<1],tree[node<<1|1]);}}
int query(int node,int start,int end,int l,int r){
	if(l>end||r<start)return 0;
	if(l<=start && end<=r)return tree[node];
	else{int mid=start+(end-start)/2;
		int p1=query(node<<1,start,mid,l,r);
		int p2=query(node<<1|1,mid+1,end,l,r);
		return max(p1,p2);}}
int main(){
	int n,k,p;
	scanf("%d %d %d",&n,&k,&p);
	//Handle subtask 1
	if(n<=1000 && k<=1000 && p<=1000){
		int A[1005];
		char s[1005];
		for(int i=0;i<n;++i)scanf("%d",&A[i]);
		scanf("%s",s);
		int ans=0;
		int temp;
		int ct;
		for(int q=0;s[q]!='\0';++q){
			if(s[q]=='!'){
				temp=A[n-1];
				for(int i=n-1;i>0;i--)A[i]=A[i-1];
				A[0]=temp;
			}
			else{
				ans=0;
				int j;
				for(int i=0;i<n;i++){
					j=0;
					ct=0;
					while(i+j<n && j<k){
						if(A[i+j]==1)ct++;
						j++;
					}
					ans=max(ans,ct);
				}
				printf("%d\n",ans);
			}
		}
		return 0;	
	}
	
	//Handle full constraints
	int A[2000005];
	int i;
	char q;
	for(i=0;i<n;i++)scanf("%d",&A[i]);
	//concatenate array to itself
	for(int j=0;j<n;j++)A[i++]=A[j];
	
	//generate array dp to memorize windows
	for(int i=0;i<k;i++)if(A[i]==1)dp[0]++;
	for(int i=1;i<2*n-k;i++){
		if(A[i+k-1]>A[i-1])dp[i]=dp[i-1]+1;
		else if(A[i+k-1]==A[i-1])dp[i]=dp[i-1];
		else dp[i]=dp[i-1]-1;	
	}
	
	for(int i=2*n-k;i<2*n;i++)if(A[i]==1)dp[2*n-k]++;
	for(int i=2*n-k+1;i<2*n;i++)if(A[i-1]==1)dp[i]=dp[i-1]-1;else dp[i]=dp[i-1];
	
	//build segment tree
	build(1,0,2*n-1);
	
	int shifts=0;
	char queries[1000005];
	scanf("%s",queries);
	
	//query time
	for(int m=0;m<p;m++){
		if(queries[m]=='?'){
			shifts=shifts%n;
			while(shifts<0)shifts+=n;
			int res=0;
			//query over segment tree corresponding shifted range
			printf("%d\n",query(1,0,2*n-1,n-shifts,2*n-shifts-k));	
		}
		//update current number of shifts
		else shifts++;
	}
	return 0;
}
