#include<stdio.h>

int main(){
	int t,c,d,l;
	long int max,min;
	scanf("%d",&t);
	while(t--){
		int flag=0;
		scanf("%d %d %d",&c,&d,&l);
		if(d==0) min=c<<2;
		else if(c/2>=d){
			min=(c/2)<<2 + (c%d)<<2;	
		}
		else{
			min=d<<2;
		}
		max=(c+d)<<2;
		if(l<=max && l>=min && (l>>2)<<2==l)printf("yes\n");
		else printf("no\n");
	
	}
}
