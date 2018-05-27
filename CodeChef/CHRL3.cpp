#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++)cin>>A[i];
	vector<int> dp(n, -1);
	vector<int> pos(n, -1);
	
	
