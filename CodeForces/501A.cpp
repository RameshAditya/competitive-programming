#include<stdio.h>

#define max(a,b) (a>b)?a:b

int main(){
	float m=0;
	float v=0;
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	m=max((float)3*a/10,a-((float)a/250)*c);
	v=max((float)3*b/10,b-((float)b/250)*d);
	if(m>v)printf("Misha\n");
	else if(m==v)printf("Tie\n");
	else printf("Vasya\n");
}
