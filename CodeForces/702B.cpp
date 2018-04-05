#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int A[n];
	set<int> val;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	sort(A,A+n);
	int p[31];
	p[0]=1;
	for(int i=1;i<31;i++)p[i]=2*p[i-1];
	
	int res=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<31;j++){
			int mm = upper_bound(A+i, A+n, p[j] - A[i]) - lower_bound(A+i, A+n, p[j] - A[i]);
			int nn = upper_bound(A, A+i, A[i]) - lower_bound(A, A+i, A[i]);
			res += nn*mm;
		}	
	}
	
	cout<<res<<"\n";
}
