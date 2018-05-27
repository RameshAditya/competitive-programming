#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, x, y;
	cin>>n>>x>>y;
	pair<long long, long long> contest[n];
	vector<long long> open(x);
	vector<long long> close(y);
	
	for(long long i=0;i<n;i++)cin>>contest[i].first>>contest[i].second;
	for(long long i=0;i<x;i++)cin>>open[i];
	for(long long i=0;i<y;i++)cin>>close[i];
	sort(contest, contest+n);
	sort(open.begin(), open.end());
	sort(close.begin(), close.end());
	
	long long ans = 1e9;
	for(long long i=0;i<n;i++){
		long long st = *(upper_bound(open.begin(), open.end(), contest[i].first) - 1);
		long long en = *upper_bound(close.begin(), close.end(), contest[i].second-1);
		ans = min(ans, en - st + 1);
	}
	cout<<ans<<"\n";
}
