#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	vector<int> A(n,0);
	vector<int> dp(n,0);
	vector<pair<int, int> > mx(n);
	
	for(int i=0;i<n;i++)cin>>A[i];
	for(int i=0;i<k;i++)dp[0] += A[i];
	for(int i=1;i<=n-k;i++)dp[i] = dp[i-1] + A[i+k-1] - A[i-1];
	
	mx[n-1].first = dp[n-1];
	mx[n-1].second = n-1;
	
	for(int i=n-2;i>=0;i--){
		if(mx[i+1].first>=dp[i]) mx[i].first = mx[i+1].first, mx[i].second = mx[i+1].second;
		else mx[i].first = dp[i], mx[i].second = i;
	}
	
	int maxsum = 0;
	for(int i=0;i<=n-k;i++)maxsum=max(maxsum, dp[i] + mx[i+k-1].first);
	for(int i=0;i<=n-k;i++)if(maxsum=dp[i] + mx[i+k-1].first){ cout<<i+1<<" "<<mx[i+k-1].second+1; break;}
	//cout<<maxsum<<"\n";
	
	//for(auto i:mx)cout<<i<<" ";
}
