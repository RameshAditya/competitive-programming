#include<stdio.h>
int main(){
	int t,n,A[1000];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int i=0;
		for(;i<n;i++){
			scanf("%d",&A[i]);
		}
		int ct=0
		for(i=0;i<n;i++){
			
			if((A[i]==1&&A[i-1]!=0)||(A[i]==0&&A[i+1]!=0)){
				ct+=2;
			}
		}
		
	}
	return 0;
}
