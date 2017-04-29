#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	long long int A[100001];
	for(int i=0;i<n;i++)scanf("%lld",&A[i]);
	if(k==0)for(int i=0;i<n;i++)printf("%lld ",A[i]);
	else if(k&1){
		long long int m=A[0];
		for(int i=0;i<n;i++)m=max(A[i],m);
		for(int i=0;i<n;i++)A[i]=m-A[i];
		for(int i=0;i<n;i++)printf("%lld ",A[i]);
	}
	else{
		long long int m=A[0];
		for(int i=0;i<n;i++)m=max(A[i],m);
		for(int i=0;i<n;i++)A[i]=m-A[i];
		
		m=A[0];
		for(int i=0;i<n;i++)m=max(A[i],m);
		for(int i=0;i<n;i++)A[i]=m-A[i];
		for(int i=0;i<n;i++)printf("%lld ",A[i]);
	}
	printf("\n");
}
