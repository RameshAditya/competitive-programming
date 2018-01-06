#include<bits/stdc++.h>
using namespace std;

long long ct[35][2];

int main(){
	std::ios_base::sync_with_stdio(0);
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		memset(ct, 0, sizeof(ct));
		for(long long i=0;i<30;i++)ct[i][0]=1;
		long long ans=0;
		long long sum=0;
		while(n--){
			long long x;
			cin>>x;
			sum^=x;
			
			for(long long i=0;i<30;i++)
				if(sum&(1<<i))ans+=(1<<i)*ct[i][0];
				else ans+=(1<<i)*ct[i][1];
			
			for(long long i=0;i<30;i++)
				if(sum&(1<<i))ct[i][1]++;
				else ct[i][0]++;
		}
	cout<<ans<<"\n";
	}
}
