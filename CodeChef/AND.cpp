#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;	scanf("%d",&n);
	int bits[30]={0};
	int a;
	long long int ans=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		for(int j=0;j<30;j++)if(a&(1<<j))bits[j]++;
	}
	for(int j=0;j<30;j++)ans+=1LL*bits[j]*(1LL*bits[j]-1LL) * (1LL<<j);
	printf("%lld\n",ans/2LL);
}
