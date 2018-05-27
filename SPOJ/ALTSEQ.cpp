#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans = 0;
	vector<int> A(n);
	for(int i=0;i<n;i++)cin>>A[i];
	vector<int> dp(n, 1);
	for(int i=0;i<n;i++)
		for(int j=i-1;j>=0;j--)
			if(A[i]*A[j]<0 && abs(A[i])>abs(A[j]))
				dp[i] = max(dp[i], dp[j]+1);
	cout<<*max_element(dp.begin(),dp.end())<<"\n";
}
