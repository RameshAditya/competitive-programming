#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a,b;
	scanf("%lld%lld",&a,&b);
	if(abs(a-b)>=10)printf("0\n");
	else{
		long long int res=1;
		for(long long int i=b;i>a;i--)res*=i,res%=10;
		printf("%lld\n",res);
	}
}
