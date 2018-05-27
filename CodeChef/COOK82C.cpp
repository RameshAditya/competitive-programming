#include<bits/stdc++.h>
using namespace std;

int main(){
	std::ios_base::sync_with_stdio(0);
	long long n, m;
	cin>>n>>m;
	long long A[n];
	for(int i=0;i<n;i++)cin>>A[i];
	sort(A, A+n);
	queue<long long> a;
	queue<long long> b;
	for(int i=n-1;i>=0;i--)a.push(A[i]);
	long long ans[63000001];
	for(int i=1;i<63000001;i++){
		if(b.empty()){
			if(a.empty())break;
			long long x = a.front();
			a.pop();
			ans[i] = x;
			b.push(x/2);
		}
		
		else if(a.empty()){
			long long x = b.front();
			b.pop();
			ans[i] = x;
			b.push(x/2);
		}
		else{
			long long x = a.front();
			long long y = b.front();
			if(x>y){
				ans[i] = x;
				b.push(x/2);
				a.pop();
			}
			else{
				ans[i] = y;
				b.push(y/2);
				b.pop();
			}
		}
	}
	
	while(m--){
		int q;
		cin>>q;
		cout<<ans[q]<<"\n";
	}
}
	
