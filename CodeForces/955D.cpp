#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, k;
	cin>>n>>m>>k;
	
	string s;
	string x="";
	cin>>s;
	cin>>x;
	int l=0, r=0;
	n = s.length();
	string front = x + '$' + s;
	//string front = s;
	cout<<"f: "<<front<<"\n";
	n = front.length();
	vector<int> zf(front.length(), 0);
	
	for(int i=1; i<front.length(); i++){
		if(i<=r)zf[i] = min(r-i+1, zf[i-l]);
		while(i+zf[i]<n && front[zf[i]] == front[i+zf[i]])zf[i]++;
		if(i+zf[i]>r)l=i, r=i+zf[i]-1;	
	}
	
	for(auto i:zf)cout<<i<<" ";

	
	
}
