#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,k;
	scanf("%lld %lld",&n,&k);
	long long int A[50];
	for(int i=0;i<n;i++)scanf("%lld",&A[i]);
	long long int res=0;
	for(int i=1;i<(1<<n);i++){
		long long int p=1;
		for(int j=0;j<n;j++){
			if(i&(1<<j))
				p*=A[j];
		}
		if(p<=k)res++;
	}
	printf("%lld\n",res);
}
