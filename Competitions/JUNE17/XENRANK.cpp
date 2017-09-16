#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int x,y;
		scanf("%lld%lld",&x,&y);
		printf("%lld\n",1+x+(x+y)*(x+y+1)/2ll);
	}
}
