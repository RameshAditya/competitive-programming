#include<bits/stdc++.h>

long int gcd(long int a,long int b){
	if(b==0)return a;
	return gcd(b,a%b);
}

long int lcm(long int a,long int b){
	return a*b/gcd(a,b);
}

int main(){
	int t; scanf("%d",&t);
	while(t--){
		long int a,b;
		scanf("%ld %ld",&a,&b);
		printf("%ld %ld\n",gcd(a,b),lcm(a,b));
	}
	return 0;
}
