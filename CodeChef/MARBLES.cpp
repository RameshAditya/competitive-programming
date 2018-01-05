#include<bits/stdc++.h>
using namespace std;

long long int ncr(int n, int r){
	if(n==0)
		return 0;
	else if(r==0)
		return 1;
	else if(r==1)
		return n;
	return ((n-r+1)*ncr(n, r-1))/r;
}

int main(){
	int n, r;
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &n, &r);
		if(n==0 || r==0)
			printf("0\n");
		else{
			n--, r--;
			r=min(r,n-r);
			printf("%Ld\n", ncr(n, r));
		}
	}
} 
