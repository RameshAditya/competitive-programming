#include<string.h>
#include<stdio.h>

int main(){
	int T,n;
	scanf("%d",&T);
	while(T--){
		char A[10];
		scanf("%s",&A);
		int sum=0;
		sum+=(A[0]-'0')+(A[strlen(A)-1]-'0');
		printf("%d\n",sum);
	}
}
