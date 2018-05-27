#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		vector<int> x(n);
		vector<int> v(n);
		for(int i=0;i<n;i++)cin>>x[i]>>v[i];
		long long ans = 0;
				
		//let all but one go left
		for(int weirdo = 0; weirdo<n; weirdo++){
			for(int i=0;i<n;i++){
				long long first_to_cross = 1e9;
				if(i!=weirdo)
					for(int j=0;j<n;j++){
						if(j!=weirdo)
							ans = max(ans, 
		
		//let all but one go right
		
	}
}
