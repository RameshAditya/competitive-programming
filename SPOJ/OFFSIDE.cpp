#include<stdio.h>

int main(){
	int i,a,d,A[12],D[12];

	scanf("%d %d",&a,&d);
	while(a!=0||d!=0){
	int ca=10000;
	int cd=10000;
	int scd=10000;
	for(i=0;i<a;i++){scanf("%d",&A[i]); if(ca>A[i]) ca=A[i];}
	for(i=0;i<d;i++){
	scanf("%d",&D[i]); 
	if(cd>A[i]&&scd>A[i]){scd=cd;cd=A[i];}
	else if(cd<A[i]&&scd>A[i]){scd=A[i];}
	}
	if(ca<scd){printf("Y\n");
	}
	else printf("N\n");
	scanf("%d %d",&a,&d);
	}
	return 0;
}
