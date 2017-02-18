#include<stdio.h>

struct Planet{
	int P;
	int connected[101];
	int numberofconn;
	
};

int main(){
	int i,j,k,T,N,Pi,u,v;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		Planet X[N];
		int infected[N]={0};
		for(i=0;i<N;i++)scanf("%d",&X.P);
		for(i=0;i<N-1;i++){
		
			scanf("%d %d",&u,&v);
			X[u-1].connected[X[u-1].numberofconn]=v-1;
			X[u-1].numberofconn++;
			X[v-1].connected[X[v-1].numberofconn]=u-1;
			X[v-1].numberofconn++;
		}
		
		for(i=0;i<N;i++){
			for(j=0;j<N;j++)infected[j]=0;
			infected[i]=1;
			for(j=0;j<X[i].numberofconn;j++){
				infected[X[i].connected[j]]=1;
			}
			int maxpop=0;
			int index=0;
			for(j=0;j<N;j++){
				if(infected[j]==0){
					if(maxpop<X[j].P){
						maxpop=X[j].P;
						index=j;
					}
				}
			}
		printf("%d ",index+1);
		}
	}
}
