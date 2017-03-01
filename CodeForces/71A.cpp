#include<stdio.h>
#include<string.h>

int main(){
	int t;
	char A[101];
	scanf("%d",&t);
	while(t--){
		scanf("%s",A);
		if(strlen(A)<=10)printf("%s\n",A);
		else{
			printf("%c%d%c\n",A[0],strlen(A)-2,A[strlen(A)-1]);
		}
	}
}
