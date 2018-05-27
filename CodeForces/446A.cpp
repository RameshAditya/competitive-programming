#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	vector<long long> A(n);
	vector<long long> l(n, 0);
	vector<long long> r(n, 0);
	for(long long i=0;i<n;i++){
		cin>>A[i];
	}
	l[n-1] = 1;
	for(long long i=n-2; i>=0;i--)l[i] = (A[i]<A[i+1])? l[i+1]+1:1;
	r[0] = 1;
	for(long long i=1;i<n;i++)r[i] = (A[i]>A[i-1])? r[i-1]+1:1;
	long long ans = 1;
	//for(auto i:l)cout<<i<<"|";
	//cout<<"\n";
	//for(auto i:r)cout<<i<<"-";
	//cout<<"\n\n";
	if(n==2){cout<<2<<"\n";return 0;}
	for(long long i=1;i<n-1;i++){
		if(A[i-1] + 1 < A[i+1]) ans = max(ans, r[i-1] + 1 + l[i+1]);
		else ans = max(ans, max(l[i+1], r[i-1]) + 1);
	}
	
	cout<<ans<<"\n";
}
