#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long int sum=0;
		vector<int> a;
		for(int i=0;i<n;++i){int x;scanf("%d",&x);a.push_back(x);sum+=x;}
		if(n!=1)
		sum/=(n-1);
		else sum=2*a[0];
		for(int i=0;i<n;++i)printf("%d ",sum-a[i]);
		printf("\n");
	}
	return 0;
}
