#include<bits/stdc++.h>
using namespace std;

int pref[101000][32];
int A[101000];


int main(){
	std::ios_base::sync_with_stdio(0);
	memset(pref, 0, sizeof(pref));
	int n, q;
	cin>>n>>q;
	
	for(int i=1;i<=n;i++){
		cin>>A[i];
		for(int j=0;j<31;j++){
			pref[i][j] = pref[i-1][j] + ((A[i]>>j)&1);
		}
	}

	while(q--){
		int l, r;
		cin>>l>>r;
		long long int res = 0;
		long long int poss[31];
		for(int i=0;i<31;i++)poss[i] = pref[r][i] - pref[l-1][i];
		for(int i=30;i>=0;i--)if(poss[i]>(r-l+1)/2)res+=0; else res+=(1<<i);
		cout<<res<<'\n';
	}
}
