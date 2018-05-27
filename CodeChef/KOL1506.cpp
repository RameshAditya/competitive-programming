#include<bits/stdc++.h>
using namespace std;

int binom[105][105];

int make(){
	for(int i=0;i<105;i++) binom[i][0] = binom[0][i] = 1;
	
	for(int i=0;i<105;i++)
		for(int j=0;j<105;j++)
			binom[i][j] = binom[i-1][j-1] + binom[i-1][j];
}

int main(){
	std::ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		vector<int> A(n);
		for(int i=0;i<n;i++)cin>>A[i];
		
	}
}
