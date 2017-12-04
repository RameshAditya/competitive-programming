#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,d;
	cin>>n>>d;
	int A[100005];
	for(int i=0;i<n;i++)cin>>A[i];
	
	int runtot=0;
	int ans=0;
	int ok=1;
	vector<int> segments;
	
	for(int i=0;i<n;i++){
		runtot+=A[i];
		if(A[i]==0){
			segments.push_back(runtot);
			runtot=0;
		}
	}
	
}
