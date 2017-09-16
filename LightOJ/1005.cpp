#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	for(int T=1;T<=t;T++){
		long long int backtrack;
		long long int result;
		long long int n,k;
		scanf("%lld%lld",&n,&k);
		if(k==0)printf("Case %d: 1\n",T);
		else if(n<k)printf("Case %d: 0\n",T);
		else{
			backtrack=n*n;
			result=n*n;
			for(int i=1;i<k;i++){
				backtrack-=2*(n--)+1;
				result=(result/i)*backtrack;
			}
			printf("Case %d: %lld\n",T,result/k);
		}
	}
}
			
