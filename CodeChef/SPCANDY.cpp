#include<stdio.h>
int main(){
	long long int t,n,k;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		scanf("%lld",&k);
		if(k==0){
			printf("0 %lld\n",n);
			return 0;
		}
		else{
		printf("%lld %lld\n",n/k,n%k);
		return 0;}
	}
}
