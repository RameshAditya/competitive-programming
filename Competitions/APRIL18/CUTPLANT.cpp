#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int wut = 0;
		int A[n];
		int B[n];
		
		for(int i=0;i<n;i++)cin>>A[i];
		for(int i=0;i<n;i++)cin>>B[i], wut = max(wut, 0 + (B[i]>A[i]));
		
		if(wut) {cout<<"-1\n";continue;}
		
		stack<int> st;
		int res=0;
		for(int i=0;i<n;i++){
			if(st.empty())st.push(i);
			else if(B[i]<B[st.top()]) st.push(i);
			else if(B[i] == B[st.top()])continue;	
			else{
				while(!st.empty() && B[st.top()]<B[i])st.pop(), res++;
				while(i<n && B[st.top()] == B[i])i++;
				if(i<n)st.push(i);
			}
		}
		cout<<res<<"\n";
	}
}
