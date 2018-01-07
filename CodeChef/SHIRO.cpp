#include<bits/stdc++.h>
using namespace std;

int main(){
	std::ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	int A[101];
	int prob[101];
	while(t--){
		int n;
		double num=0;
		double den=0;
		cin>>n;
		for(int i=0;i<n;i++)cin>>A[i];
		for(int i=0;i<n;i++)cin>>prob[i];
		
		for(int i=0;i<n;i++){
			num+=A[i]*prob[i];
			den+=A[i]*100;
		}
		
		cout<<num/den<<"\n";
	}
}
