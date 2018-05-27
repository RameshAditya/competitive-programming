#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, c;
	cin>>n>>c;
	vector<long long> x(n);
	vector<long long> v(n);
	vector<pair<long long, long long> > cw(n);
	vector<pair<long long, long long> > ccw(n);
	
	for(long long i=0;i<n;i++){
		cin>>x[i]>>v[i];
		cw[i].first = x[i];
		if(i==0)cw[i].second = v[i];
		else cw[i].second = cw[i-1].second + v[i];
		
	}
	ccw[n-1].first = x[n-1];
	ccw[n-1].second = v[n-1];
	for(long long i = n-2;i>=0;i--){
		ccw[i].first = x[i];
		if(i==n-1)ccw[i].second = v[i];
		else ccw[i].second = v[i] + ccw[i+1].second;	
	}

	long long ans = 0;
	long long cur = 0;
	long long place = 0;
	for(long long i=0;i<n;i++){
		ans = max(ans, 0 - cw[i].first + cw[i].second);
		
		for(long long j = n-1;j>i;j--){
			ans = max(ans, 0 - cw[i].first + cw[i].second - cw[i].first - (c-ccw[j].first) + ccw[j].second);
		}
	}
	
	for(long long i=n-1;i>=0;i--){
		ans = max(ans, 0 - (c-ccw[i].first) + ccw[i].second);
		
		for(long long j = 0;j<i;j++){
			ans = max(ans, 0 - (c-ccw[i].first) + ccw[i].second - (c-ccw[i].first) - (cw[j].first) + cw[j].second);
		}
	}
	
	cout<<ans<<"\n";
}
