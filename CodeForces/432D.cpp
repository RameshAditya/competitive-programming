#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n = s.length();
	
	vector<pair<int, int> > ans;
	vector<int> z(n, 0);
	
	z[0] = n;
	for(int i = 1, l = 0, r = 0;i < n; i++){
		if(i <= r) z[i] = min(r-i+1, z[i-l]);	
		while(i+z[i]<n && s[z[i]] == s[i+z[i]])z[i]++;
		if(i + z[i]>r)l=i, r = i+z[i]-1;
	}
	int ct = 0;
	int sz[n+1];
	for(int i=0;i<=n;i++)sz[i]=0;
	for(auto i:z)cout<<i<<" ";
	//sort(ans.begin(), ans.end());
	
	//for(auto i:ans)cout<<i.first<<" "<<i.second<<"\n";
}
