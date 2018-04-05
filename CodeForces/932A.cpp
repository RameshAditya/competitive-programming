#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int ct[26];
	cout<<s;
	string r="";
	for(int i=s.length()-1;i>=0;i--)r+=s[i];
	r+='\0';
	if(r!=s)
		cout<<r;
	//cout<<"\n";
}
