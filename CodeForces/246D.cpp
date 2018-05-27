#include<bits/stdc++.h>
using namespace std;


int main(){
	int n, m;
	cin>>n>>m;
	map<int, bool > Q[100001];	
	int c[1000001];
	
	for(int i=1;i<=n;i++){cin>>c[i];}
	for(int i=0;i<m;i++){
		int x, y;
		cin>>x>>y;	
		int ca = c[x], cb = c[y];
		//col.push_back(c[x]);
		//col.push_back(c[y]);
		if(ca!=cb){
			Q[ca][cb] = Q[cb][ca] = 1;
		}
	}
	
	int best = *min_element(c+1, c+n+1);
	for(int i=1;i<=n;i++)if(!best || Q[i].size() > Q[best].size())best = i;
	cout<<best<<"\n";
}
