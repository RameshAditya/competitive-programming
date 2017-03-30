#include<stdio.h>

int main(){
	int sum[50];
	int id[50];
	int T,i,j,total;
	scanf("%d",&T);
	while(T--){
		total=0;
		int n;
		scanf("%d",&n);
		for(i=0;i<n;i++)scanf("%d %d",&id[i],&sum[i]);
		
		for(i=0;i<n;i++)total-=sum[i];
		
		for(i=0;i<n;i++)total+=id[i];
		printf("%d\n",total);
	}
}

