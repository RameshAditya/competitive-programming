#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a>b)?a:b
int main(){
	int t,n,k;
	scanf("%d",&t);
	while(t--){
		int ans=0;
		scanf("%d %d",&n,&k);
		vector<int> a(n);
		vector<int> b(n);
		for(int i=0;i<n;i++)scanf("%d",&a[i]);
		for(int i=0;i<n;i++)scanf("%d",&b[i]);
		for(int i=0;i<n;i++)ans=max(ans,k/a[i]*b[i]);
		printf("%d\n",ans);
	}
	return 0;
}
