#include<stdio.h>

int main(){
	int mj,i,n,m,A[100001];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)scanf("%d",A+i);
	while(m--){
	int l,r,k;
	scanf("%d %d %d",&l,&r,&k);
	int occur[100001];
	int max=0;
	int maxval=-1;
	for(i=l-1;i<r;i++){occur[A[i]]++;if(occur[A[i]]>max){max=occur[A[i]];maxval=A[i];}
	if(occur[A[i]]==max);
	}
	int ct=0;
	for(i=l-1;i<r;i++)if(occur[A[i]]>=k)ct++;
	(ct!=1)?printf("%d\n",maxval):printf("-1");
}}
