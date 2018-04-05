#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	set<int> vals;
	set<pair<double, int> > means;
	int A[q];
	int sums[q];
	sums[0]=0;
	int sz=1;
	while(q--){
		int type, x;
		cin>>type;
		if(type==1){
			cin>>x;
			sums[sz]=sums[sz-1]+x;
			sz+=1;
			A[sz]=x;
			means.insert(make_pair(sums[sz-1]/sz-1, sz-1));
			vals.insert(x);
		}
		else{
			/*for(int i=0;i<sz;i++)cout<<"s: "<<sums[i]<<" ";
			cout<<"\n";
			set<pair<double, int> >::iterator it; 
			for(it = means.begin(); it!=means.end(); it++)cout<<"Means: "<<(*it).first<<" "<<(*it).second<<"|";
			cout<<"\n";
			cout<<"max: "<<*vals.rbegin()<<"\n";
			cout<<"mean: "<<(((*means.begin()).first) * ((*means.begin()).second) + *vals.rbegin())/((*means.begin()).second+1)<<"\n";
			*/
			cout<<*vals.rbegin() - (((*means.begin()).first) * ((*means.begin()).second) + *vals.rbegin())/((*means.begin()).second+1)<<"\n";
		}		
	}
}
