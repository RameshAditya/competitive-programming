#include<bits/stdc++.h>
using namespace std;

int n,total;
vector<pair<int, int> > denom;

int dp(int val){
	if(val==0)return 0;
	int x=1e9;
	for(int i=0;i<n;i++)
		if( pow(denom[i].first*denom[i].first + denom[i].second*denom[i].second , 0.5) <=val)
			x=min(x, 1+dp(val- pow(denom[i].first*denom[i].first + denom[i].second*denom[i].second, 0.5)));
	return x;
}

int main(){
	int n, total;
	cin>>n>>total;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		denom.push_back({x,y});
	}
	cout<<"A:"<<dp(total);
	
}
