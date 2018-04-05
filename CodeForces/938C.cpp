#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<long long int> ma;
	std::ios_base::sync_with_stdio(0);
	for(int i=1;i<10000;i++)ma.push_back(i*i);
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		int ok=0;
		if(x==0){
			cout<<"1 1\n";
			continue;
		}
		if(x==1){
			cout<<"-1\n";
			continue;	
		}
		for(int i=0;i<10000;i++){
			//cout<<i*i - x<<":"<<binary_search(ma.begin(),ma.end(), i*i - x)<<" ";
			if((int)sqrt(ma[i]-x) * (int)sqrt(ma[i]-x) == ma[i] - x){
				ok=1;
				int k = (int)sqrt(ma[i] - x) + 1;
				k = (int)ceil((float)k/2);
				cout<<i+1<<" "<<k<<"\n";break;}
		}
		if(!ok)cout<<"-1\n";
	}
}
