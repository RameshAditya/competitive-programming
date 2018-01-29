#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
	string s;
	int res=0;	
	cin>>s;
	int ans=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='(')res++;
		else res--;
		ans=max(ans, res);
	}
	for(int i=0;i<ans;i++)cout<<"(";
	for(int i=0;i<ans;i++)cout<<")";
	cout<<"\n";
	}
}
