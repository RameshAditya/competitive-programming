/*input
1
5
1 2 2 3 1
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	//std::ios_base::sync_with_stdio(0);
	//cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int A[n];
		for(int i=0;i<n;i++)cin>>A[i];
		long long int pref[n+1];
		pref[0]=0;
		for(int i=0;i<n;i++)pref[i+1]=pref[i]+A[i];
		long long int op[n];
		memset(op, 0, sizeof(op));
		for(int i=0;i<n;i++){
			int ul = upper_bound(pref, pref+n, pref[i+1] + A[i]) - pref;
			//cout<<"At element: "<<i<<" Upper limit: "<<ul-1<<"\n";
			for(int j=i+1;j<ul;j++)op[j]++;
			int lo = lower_bound(pref, pref+n, pref[i] - A[i]) - pref;
			//cout<<"At element: "<<i<<" Lower limit: "<<lo<<"\n";
			for(int j=i-1;j>=lo-1;j--)op[j]++;
		}
		for(int i=0;i<n;i++)cout<<op[i]<<" ";
		cout<<"\n";
	}
}
