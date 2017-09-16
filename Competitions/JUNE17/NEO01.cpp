#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int x;
		long long int A[n];
		for(int i=0;i<n;i++)scanf("%lld",&A[i]);
		sort(A,A+n);
		long long int suma[n+1];
		suma[0]=0;
		for(int i=1;i<=n;i++)suma[i]=suma[i-1]+A[i-1];
		int m=n;
		int ind;
		long long int cur=suma[n];
		for(int i=n;i>=0;i--)cur=max(cur,suma[i]+(n-i)*(suma[n]-suma[i]));
		printf("%lld\n",cur);
	}
}
