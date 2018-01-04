#include<bits/stdc++.h>
using namespace std;

int main(){
	int N=1;
	
	int val[65536];
	int pot[65536];
	while( scanf("%d",&N) == 1){
		
		for(int i=0;i<(1<<N);i++)val[i]=pot[i]=0;
		
		for(int i=0;i < (1<<N) ;i++){
			scanf("%d",&val[i]);	
		}
		
		for(int i=0;i<(1<<N);i++){
			for(int j=0;j<N;j++){
				pot[i]+=val[i^(1<<j)];
			}
		}
		
		int res=0;
		for(int i=0;i<(1<<N);i++){
			for(int j=0;j<N;j++){
				res=max(res, pot[i]+pot[i^(1<<j)]);
			}
		}
		
		printf("%d\n",res);	
	}
}
