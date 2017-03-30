#include<stdio.h>

int main(){
	
	int A[100001];
	int t,n,i,ans=0,noz=0;
	scanf("%d",&t);
	while(t--){
		ans=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)scanf("%d",A+i);
		for(i=0;i<n;i++){
			if(A[i]==0)
			{noz++;
			ans+=1100;
			printf("Updated ans to %d at i=%d ",ans,i);
			}
			else{
				if(noz>0){
					noz--;
					ans+=100;
					printf("updated ans to %d at i=%d ",ans,i);
				}
			}
		}
		printf("%d\n",ans);
	}
	
}
