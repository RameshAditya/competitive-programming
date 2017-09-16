#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(long long int i=(1<<20);i<(1<<n);i++){
		for(int j=0;j<n;j++){
			if(i&(1<<j))printf("A[%d]*",j);
		}
		printf("==k)ct++;\n");
	}
}
