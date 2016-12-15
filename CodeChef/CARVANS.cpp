#include<stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n,A[10000];
		scanf("%d",&n);
		int i;
		int min=0;
		for(i=0;i<n;i++){
			scanf("%d",&A[i]);
		}
		min=A[0];
		int ct=0;
		for(i=0;i<n;i++){
			if(A[i]<=min){
				ct++;
				min=A[i];
			}
		}
		printf("%d\n",ct);
	}
}
