#include<stdio.h>

int main(){
	double ans;
	int A[101];
	int n;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)scanf("%d",A+i);
	//ans=p1+p2+p3;
	double sum=0;
	for(i=0;i<n;i++)sum+=A[i];
	printf("%.8lf\n",sum/n);
}
