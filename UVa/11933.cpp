#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	while( n != 0 ){
		int a=0;
		int b=0;
		while(n){
			a += (n & (-n));
			n = n - (n & (-n));
			b += (n & (-n));
			n = n - (n & (-n));	
		}
		printf("%d %d\n",a,b);
		scanf("%d",&n);
	}
}
