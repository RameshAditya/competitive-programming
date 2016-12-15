#include<math.h>
#include<stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int b,ls;
		float min, max;
		scanf("%d %d",&b,&ls);
		min=sqrt(ls*ls - b*b);
		max=sqrt(ls*ls + b*b);
		printf("%f %f\n",min,max);
	}
}
