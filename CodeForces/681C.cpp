#include<bits/stdc++.h>
using namespace std;


int main(){
	std::ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	priority_queue<int> pq;
	int res=0;
	
	
	for(int i=0;i<n;i++){
		string s;
		int x;
		cin>>s;
		if(s[0]=='i'){
			cin>>x;
			pq.push(x);
			res++;
			//cout<<s<<" "<<x<<"\n";
		}
		if(pq.size()==0 && s[0]=='r'){
			res++;
			//cout<<"insert 1000000000\n";
			res++;
			//cout<<s<<"\n";
			pq.pop();
		}
		if(s[0]=='g'){
			cin>>x;
			while(pq.size()>0 && pq.top()!=x){
				res++;
				//cout<<"removeMin\n";
				pq.pop();
			}
			if(pq.size()==0){
				res+=2;
				//cout<<"insert "<<x<<"\n";
				//cout<<"getMin "<<x<<"\n";
			}
		}
	}
}
