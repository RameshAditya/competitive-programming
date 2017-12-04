#include<bits/stdc++.h>
using namespace std;
#define min(a,b) (a<b)?a:b

int main(){
	int n;
	std::ios_base::sync_with_stdio(false);
	cin>>n;
	int A[400];
	int totsum=0;
	int pref[400];
	memset(pref,0,sizeof(pref));
	pref[0]=0;
	for(int i=1;i<=n;i++){
		cin>>A[i];
		pref[i]=pref[i-1]+A[i];
	}
	int diff=pref[n];
	for(int i=0;i<=n;i++){
		for(int j=i+1;j<=n;j++)
			diff=min(diff,abs(pref[i]+pref[n]-pref[j+2]-(pref[j-1]-pref[i-1])));
			//diff=min(diff, sum(0:i-1) + sum(j+1:n-1) - sum(i:j)
	}
	cout<<diff;
	return 0;
}
