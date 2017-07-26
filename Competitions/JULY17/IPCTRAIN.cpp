#include<bits/stdc++.h>
using namespace std;

bool sortprop(const pair<int, pair<int, int> > &a, const pair<int, pair<int, int> > &b){
	if(a.first!=b.first)
	return (a.first<b.first);
	else return (a.second.second>b.second.second);
}


int main(){
	int t;
	int ul=100*1000;
	scanf("%d",&t);
	vector<pair<int, pair<int, int> > > data(100);
	while(t--){
		int n,d;
		scanf("%d%d",&n,&d);
		for(int i=0;i<n;i++)scanf("%d%d%d",&data[i].first,&data[i].second.first,&data[i].second.second);
		for(int i=0;i<n;i++)printf("--%d %d %d\n",data[i].first,data[i].second.first,data[i].second.second);
		sort(data.begin(),data.end(),sortprop);
		for(int i=0;i<n;i++)printf("**%d %d %d\n", data[i].first, data[i].second.first, data[i].second.second);
		
	}
}
