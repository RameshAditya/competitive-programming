#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int A[n];
	int pref[n];	
	for(int i=0;i<n;i++){
		cin>>A[i];pref[i]=0;
	}
	int m=1;
	sort(A,A+n);
	pref[n-1]=0;
	for(int i=n-2;i>=0;i--)if(A[i]<A[i+1])pref[i]=A[i+1]+pref[i+1];else pref[i]=pref[i+1];
	long long int sum=0;
	for(int i=0;i<n;i++){
		sum+=pref[i];
		sum=sum%(1000000007);
	}
	cout<<sum;
}
