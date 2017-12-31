#include<bits/stdc++.h>
using namespace std;
long long A[200005];
long long suf[200005];
int main(){
	int n;
	std::ios_base::sync_with_stdio(false);
	cin>>n;
	A[0]=0;
	for(int i=1;i<=n;i++)cin>>A[i];
	sort(A,A+n+1);
	memset(suf, 0, sizeof(suf));
	suf[0]=0;
	for(int i=1;i<=n;i++)suf[i]=A[i]+suf[i-1];
	long long res=0;
	
	//for(int i=1;i<=n;i++)cout<<suf[i]<<" ";
	
	for(int i=1;i<=n;i++){
		int temp=upper_bound(A+i, A+n+1, A[i]+1) - A;
		//cout<<temp<<"\n";
		cout<<"For "<<A[i]<<" at i="<<i<<" the index is "<<temp<<"\n";
		if(A[temp]-A[i]>1)
			res += (suf[n]-suf[temp-1]) - (n-temp+1)*A[i];
		cout<<res<<" part 1\n";
		int prev=lower_bound(A+1,A+i,A[i]-1) - A;
		
		cout<<"prev: "<<prev<<"\n";
		cout<<"prev For "<<A[i]<<" at i="<<i<<" the index is "<<prev<<"\n";
		if(A[i]-A[prev]>1 && prev!=0)
			res += suf[prev+1] - (prev+1)*A[i];
		cout<<res<<"\n";
	}
	cout<<res/2<<"\n";
}
