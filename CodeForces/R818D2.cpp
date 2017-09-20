#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,k;
	scanf("%lld%lld",&n,&k);
	long long int maxwinners=n/2;
	if(maxwinners%(k+1)!=0)maxwinners=(maxwinners/(k+1))*(k+1);
	long long int left=n-maxwinners;
	long long int maxdiplomas=maxwinners/(k+1);
	long long int maxcertificates=maxwinners/(k+1)*k;
	printf("%lld %lld %lld\n",maxdiplomas,maxcertificates,left);
}
