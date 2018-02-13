#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1, s2;
		cin>>s1>>s2;
		int n=s1.length();
		int m=s2.length();
		
		int dp[n+1][m+1];
		
