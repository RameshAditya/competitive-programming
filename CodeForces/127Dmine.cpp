#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n = s.length();
	vector<int> z(n, 0);
	
	int l = 0;
	int r = 0;
	
	for(int i=1;i<n;i++){
		if(i<=r)z[i] = min(z[i-l], r-i+1);
		while(i + z[i] < n && s[z[i]] == s[i+z[i]])z[i]++;
		if(i+z[i]>r)l = i, r = i+z[i]-1;
	}
	
	/*int cur = 0;
	for(int i = 1; i<n; i++){
		if(z[i] + i < n)cur = max(cur, z[i]);
		else cur = max(cur, z[i]-1);	
	}
	
	int res=0;
	for(int i=1;i<n;i++)if(z[i]+i == n && z[i]<=cur)res = max(res, z[i]);
	if(res == 0)cout<<"Just a legend\n";
	else{
	for(int i=0;i<res;i++)cout<<s[i];
	cout<<"\n";
	}
	*/
}
