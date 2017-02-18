#include<stdio.h>

int main(){
	int t,n,i,c;
	char A[50];
	int occur[8];
	scanf("%d",&t);
	while(t--){
		for(i=0;i<8;i++)occur[i]=0;
		scanf("%d",&n);
		scanf("%s",&A);
		for(i=0;i<38;i++){
			if(A[i]=='T'&&A[i+1]=='T'&&A[i+2]=='T')occur[0]+=1;
			else if(A[i]=='T'&&A[i+1]=='T'&&A[i+2]=='H')occur[1]+=1;
			else if(A[i]=='T'&&A[i+1]=='H'&&A[i+2]=='T')occur[2]+=1;
			else if(A[i]=='T'&&A[i+1]=='H'&&A[i+2]=='H')occur[3]+=1;
			else if(A[i]=='H'&&A[i+1]=='T'&&A[i+2]=='T')occur[4]+=1;
			else if(A[i]=='H'&&A[i+1]=='T'&&A[i+2]=='H')occur[5]+=1;
			else if(A[i]=='H'&&A[i+1]=='H'&&A[i+2]=='T')occur[6]+=1;
			else if(A[i]=='H'&&A[i+1]=='H'&&A[i+2]=='H')occur[7]+=1;
		}
		printf("%d ",n);
		for(i=0;i<8;i++)printf("%d ",occur[i]);
		printf("\n");
	}
	
	return 0;
}
