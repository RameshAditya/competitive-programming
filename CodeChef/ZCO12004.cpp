#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, cost[123456], total[123456];
	long long res1, res2;
	cin>>n;
	for(int i=0;i<n;i++)cin>>cost[i];
	if(n==1){cout<<cost[0]<<"\n"; return 0;}
	if(n==2){cout<<min(cost[0], cost[1])<<"\n"; return 0;}
	
	total[0] = cost[0];
	total[1] = cost[1] + cost[0];
	total[2] = cost[0] + cost[2];
	
	for(int i=3;i<n;i++)total[i] = cost[i] + min(total[i-1], total[i-2]);
	
	res1 = min(total[n-1], total[n-2]);
	
	total[0] = cost[0] + cost[n-1];
	total[1] = cost[1] + cost[n-1];
	
	for(int i=2;i<n-1;i++)total[i] = cost[i] + min(total[i-1], total[i-2]);
	
	res2 = min(total[n-2], total[n-3]);
	
	cout<<min(res1, res2)<<"\n";
}
