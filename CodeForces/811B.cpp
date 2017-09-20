#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int A[10005];
	for(int i=0;i<n;i++)scanf("%d",&A[i]);
	int B[10005];
	while(m--){
		for(int i=0;i<n;i++)B[i]=A[i];
		int l,r,x;
		scanf("%d%d%d",&l,&r,&x);
		int init=B[x-1];
		int ct=0;
		for(int i=l-1;i<r;i++)if(B[i]<B[x-1])ct++;
		if(x-1==l+ct-1)
		//for(int i=0;i<n;i++)printf("B[i]=%d ",B[i]);
		printf("Yes\n");
		else printf("No\n");
	}
}
