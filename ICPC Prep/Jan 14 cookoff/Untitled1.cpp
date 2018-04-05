#include<bits/stdc++.h>
using namespace std;

int A[1002][1002];

int main(){
	std::ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<1002;i++)for(int j=0;j<1002;j++)A[i][j]=0;
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		
		for(int i=a;i<c;i++){
			for(int j=b;j<d;j++)A[i][j]=1;
		}
		
		cin>>a>>b>>c>>d;
		
		for(int i=a;i<c;i++){
			for(int j=b;j<d;j++)A[i][j]=1;
		}
		int res=0;
		
		for(int i=0;i<1002;i++){
			for(int j=0;j<1002;j++)res+=A[i][j];
		}
		cout<<res<<"\n";
	}
}
