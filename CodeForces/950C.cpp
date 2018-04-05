#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	
	vector<int> zeros;
	string temp='';
	string last='';
	if(s[0]=='1'||s[s.length()-1]=='1'){
		cout<<"-1\n";
		return;	
	}
	for(int i=0;s[i]!='\0';i++){
		if(temp=='')temp+=s[i];
		else if(temp[temp.length()-1]==s[i] && s[i]=='0')zeros.push_back(i);
		else if(
	}
	
}
