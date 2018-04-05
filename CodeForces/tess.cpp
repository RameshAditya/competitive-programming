#include<bits/stdc++.h>
using namespace std;

int par[26];

int find(int x){
	//int x=a-'a';
	return par[x]=(par[x]==x)?x:find(par[x]);	
}

int unite(int x, int y){
	//int x=a-'a';
	//int y=b-'b';
	//if(a<b)swap(a,b), swap(x,y);
	if(x<y)swap(x,y);
	par[find(x)] = find(y);
}

int main(){
	int n;
	cin>>n;
	string s1, s2;
	cin>>s1>>s2;
	for(int i=0;i<26;i++)par[i]=i;
	int ct=0;
	vector<pair<char, char> > ans;
	
	for(int i=0;i<n;i++){
		if(find(s1[i]-'a')!=find(s2[i]-'a')){
			ct++;
			ans.push_back(make_pair(s1[i],s2[i]));
			unite(s1[i]-'a',s2[i]-'a');
		}
	}
	cout<<ct<<"\n";
	for(int i=0;i<ans.size();i++)cout<<ans[i].first<<" "<<ans[i].second<<"\n";
}
