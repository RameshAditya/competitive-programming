#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		string x, y;
		cin>>x>>y;
		multiset<char> a[d];
		multiset<char> b[d];
		for(int i=0;i<d;i++)
			for(int j=i; j<n; j+=d) a[i].insert(x[j]);
		
		for(int i=0;i<d;i++)
			for(int j=i;j<n;j+=d) b[i].insert(y[j]);
		
		//for(auto i:a)cout<<i<<":";
		//cout<<"\n";
		//for(auto i:b)cout<<i<<"|";
		int f = 0;
		for(int i=0;i<d;i++)
			if(a[i] != b[i]){cout<<"No\n";f=1;break;}
		if(!f) cout<<"Yes\n";
	}
}
