#include<stdio.h>

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int cpy=n;
	//while(n--){
		while(k--){
			printf("%d ",cpy);
			cpy--;
		}
		int x=1;
		while(x<=cpy)printf("%d ",x++);
	printf("\n");
	}
//}
