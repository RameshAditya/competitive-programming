#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ct=0;
	int i=0;
	while(i<n){
		if(i<n-1 && s[i]=='U' && s[i+1]=='R')ct++, i+=2;
		else if(i<n-1 && s[i]=='R' && s[i+1]=='U')ct++, i+=2;	
		else ct++, i++;
	}
	cout<<ct<<"\n";
}
