#include<stdio.h>

long int index(int A[],int l,int r,int k){
	while(r>l+1){
		int m=(l+(r-l)/2);
		if(A[m]>=k) r=m;
		else l=m;
	}
	return r;
}

long int f(int A[],int lower,int upper){
	int lis[100000];
	long int len=1;
	lis[0]=A[lower-1];
	int i;
	for(i=lower-1;i<upper;i++){
		if(A[i]<lis[0]){
			lis[0]=A[i];
		}
		else if(A[i]>lis[len-1]){
			lis[len++]=A[i];
		}
		else
		lis[index(lis,-1,len-1,A[i])]=A[i];
	}
	return len;
}
int main(){
	int t,n,m,i,A[100000],l,u;
	scanf("%d",&t);
	while(t--){
	scanf("%d %d",&n,&m);	
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<m;i++){
		scanf("%d %d",&l,&u);
		printf("%ld\n",f(A,l,u));
	}
	}
	return 0;
}
