#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d %d",&n,&m);
		vector<int> a(n);
		int k=0;
		for(int i=0;i<n;i++){scanf("%d",&a[i]);k=max(a[i],k);}
		int res=0;
		for(int i=0;i<n;i++)res+=k-a[i];
		cout<<k;
		(res==k)?cout<<"Yes\n":cout<<"No\n";
	}
}
		
