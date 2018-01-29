#include<bits/stdc++.h>
using namespace std;
//#define push_back pb
vector<pair<int, int> > pos[5];
vector< vector<int> > edges(10);
int main(){
	pos[0].push_back({0, 5});
	pos[1].push_back({1, 6});
	pos[2].push_back({2, 7});
	pos[3].push_back({3, 8});
	pos[4].push_back({4, 9});

	edges[0].push_back(1); edges[0].push_back(4); edges[0].push_back(5);
	edges[5].push_back(0); edges[5].push_back(8); edges[5].push_back(7);
	
	edges[1].push_back(0); edges[1].push_back(2); edges[1].push_back(6);
	edges[6].push_back(1); edges[6].push_back(8); edges[5].push_back(9);
	
	edges[2].push_back(1); edges[2].push_back(3); edges[2].push_back(7);
	edges[7].push_back(2); edges[7].push_back(5); edges[7].push_back(9);
	
	edges[3].push_back(2); edges[3].push_back(4); edges[3].push_back(8);
	edges[8].push_back(3); edges[8].push_back(5); edges[8].push_back(6);
	
	edges[4].push_back(0); edges[4].push_back(3); edges[4].push_back(9);
	edges[9].push_back(4); edges[9].push_back(6); edges[9].push_back(7);

	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string r1="";
		string r2="";
		
		for(int i=0;i<s.length();i++)
		
	}
}
