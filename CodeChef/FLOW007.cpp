#include<stdio.h>
#include<string.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char n[100];
		scanf("%s",&n);
		int i=strlen(n)-1;
		for(;i>=0;i--){
			printf("%c",n[i]);
		}
		//printf("\n");
	}
}
