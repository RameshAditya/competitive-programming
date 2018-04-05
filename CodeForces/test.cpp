#include<bits/stdc++.h>
using namespace std;

int main(){
	int A[5]={1,2,3,4,5};
	vector< pair<int, int> > pp;
	pp.push_back( {1,2} );
	pp.push_back( {3,4} );
	for(auto i:A)cout<<i<<" ";
	cout<<"\n";
	for(auto i:pp)cout<<i.first<<" "<<i.second<<"\n";
}
