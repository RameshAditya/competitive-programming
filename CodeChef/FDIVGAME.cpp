#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int res=0;
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			a[i]/=6;
			a[i]++;
		}
		for(int i=0;i<n;i++)res^=a[i];
		(res==0)?printf("Henry\n"):printf("Derek\n");
	}
	return 0;
}
