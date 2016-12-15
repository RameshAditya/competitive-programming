#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n!=0){
		printf("%lld",(n*(n+1)*(2*n+1)/6));
	}
	return 0;
}
