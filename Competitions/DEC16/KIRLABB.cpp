#include<stdio.h>
#include<stdlib.h>
long int gcd(int a,int b){
	if(b%a==0) return a;
	else return gcd(b,a%b);
}

long int lis(long int A[],int n){
	int *ans,i,j,maxlength=0;
	ans=(int*)malloc(sizeof(int)*(n));
	for(i=0;i<n;i++){
		ans[i]=1;
	}
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(gcd(A[i],A[j])>1 && ans[i]<1+ans[j])
			ans[i]=ans[j]+1;
		}
	}
	
	for(i=0;i<n;i++){
		if(maxlength<ans[i])
		maxlength=ans[i];
	}
	free(ans);
	return maxlength;
}

int main(){
	int t,n,i;
	long int A[100000];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%ld",&A[i]);
		}
		printf("%ld\n",lis(A,n));
	}
	return 0;
}
