#include<stdio.h>

int main(){
	int i,n,k,x,A[2001];
	//vector<int> v;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		A[i]=x;
	}
	//sort(v.begin(),v.end());
	int ct=0;
	for(i=0;i<n;i++)if(A[i]<=5-k)ct++;
	printf("%d\n",ct/3);
}
