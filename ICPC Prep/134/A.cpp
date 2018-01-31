#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> fib(105);
	fib[0]=1;
	fib[1]=2;
	vector<int> dp(105);
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<15;i++){
		fib[i]=(fib[i-1]+fib[i-2]);
		dp[i]=dp[i-1]+1;
		//cout<<" F: "<<fib[i];
	}
	int n;
	cin>>n;
	int ans=0;
	while(n>0){
		int x=0;
		while(n>=fib[x])x++;
		x--;
		ans+=x;
		n-=fib[x];
	}
	cout<<ans;
}
