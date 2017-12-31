#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	std::ios_base::sync_with_stdio(0);
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int oc[26][26]={0};
		for(int i=0;i<26;i++)for(int j=0;j<26;j++)oc[i][j]=0;
		for(int i=0;i<s.length()-1;i++)oc[s[i]-'A'][s[i+1]-'A']=1;
		
		int res=0;
		for(int i=0;i<26;i++)for(int j=0;j<26;j++)res+=oc[i][j];
		cout<<res<<"\n";
	}
}
