#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a;
		vector<bool> v(20010,false);
		v[0]=true;
		for(int i=0;i<n;i++){
			cin>>b;
			for(int j=a;j>=0;j--){
				if(v[j])v[j+b]=true;
			}
		}
		if(v[a])cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
} 
