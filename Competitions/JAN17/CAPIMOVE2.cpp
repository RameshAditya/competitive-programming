#include<stdio.h>

int main(){
	int t,a,b,n,i,j,k;
	char neighbours[50001];
	int population[50001];
	char connections[50001][10000];
	char infected[50001];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			neighbours[i]='0';
			infected[i]='0';
			for(j=0;j<n;j++)connections[i][j]='0';
		}
		for(i=0;i<n;i++)scanf("%d",&population[i]);
		for(i=0;i<n-1;i++){
			scanf("%d %d",&a,&b);
			connections[a-1][neighbours[a-1]-'0']=(b-1)+'0';
			neighbours[a-1]++;
			connections[b-1][neighbours[b-1]-'0']=(a-1)+'0';
			neighbours[b-1]++;
		}
		/*for(i=0;i<n;i++){
			for(j=0;j<neighbours[i];j++)printf("%d ",connections[i][j]);
			printf("\n");
		}*/
		for(i=0;i<n;i++){
			int maxpop=-1;
			int index;
			int flag=0;
			for(j=0;j<n;j++)infected[j]='0';
			infected[i]+=1;
			for(j=0;j<(neighbours[i]-'0');j++)infected[connections[i][j]-'0']='1';
			for(j=0;j<n;j++){
				if(!(infected[j]-'0')){
					flag=1;
					if(population[j]>maxpop){index=j;maxpop=population[j];}
				}
			}
			if(flag)printf("%d ",index+1);
			else printf("0 ");
		}
		printf("\n");
	}
	return 0;
}
