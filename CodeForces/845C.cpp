#include<bits/stdc++.h>
using namespace std;
//#define first ff
//#define second ss

int main(){
	std::ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector< pair<int, int> > times;
	for(int i=0;i<n;i++){
		int l,r;
		cin>>l>>r;
		times.push_back({l,r});
	}
	sort(times.begin(),times.end());
	//for(int i=0;i<n;i++)cout<<times[i].first<<" "<<times[i].second<<"\n";
	int ok=1;
	for(int i=0;i<n-1;i++)if(times[i].second>times[i+1].first)ok=0;
	(ok)?cout<<"YES":cout<<"NO";
}
