#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int A[100001];
	memset(A,0,sizeof(A));
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		A[x]++;
	}
	int lo=1;
	int hi=1000000;
	int t=0;
	while(n>0){
		if(A[lo])n-=1;
		if(n==0)break;
		if(A[hi])n-=1;
		lo++;
		hi--;
		t++;
		//cout<<lo<<hi<<"\n";
	}
	cout<<t<<"\n";
}
