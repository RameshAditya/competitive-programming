#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d %d",&n,&k);
		vector<int> a(n);
		for(int i=0;i<n;i++)scanf("%d",&a[i]);
		int ct=0;
		for(int i=0;i<n;i++)if(a[i]%2==0)ct++;
		(ct>=k)?cout<<"YES\n":cout<<"NO\n";
	}
}
