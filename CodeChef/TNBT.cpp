#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int A[n];
	int op[n];
	for(int i=0;i<n;i++) cin>>A[i], op[i]=-1;
	stack<int> s;
	
	for(int i=0;i<n;i++){
		if(s.empty())s.push(i);
		else if(A[s.top()]>=A[i])s.push(i);
		else{
			while(!s.empty() && A[s.top()]<A[i])op[s.top()] = A[i], s.pop();	
			s.push(i);
		}
	}	
	for(auto i:op)cout<<i<<" ";
}

