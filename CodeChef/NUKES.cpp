#include<stdio.h>

int main(){
	int a,n,k;
	scanf("%d %d %d",&a,&n,&k);
	int A[201];
	int i;
	for(i=0;i<k;i++){
		A[i]=0;
	}
	int current=0;
	int flag=0;
	//a-number of neutrons, n is threshold explosion, k is no of reactors
	while(a-- && current<k){
		if(flag==0){
		current=0;
		flag=1;}
		
		A[current]++;
		
		if(A[current]>n){
			A[current]=0;
			current+=1;
			A[current]=1;
			flag=0;
		}
	}
	for(current=0;current<k;current++){
		printf("%d ",A[current]);
	}
	return 0;
}
