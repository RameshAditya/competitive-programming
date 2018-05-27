#include<bits/stdc++.h>
using namespace std;

#define SZ 35

int main(){
	long long c[SZ][SZ];
	for(long long i=0;i<SZ;i++){
		for(long long j=0;j<=i;j++){
			if(j==0)c[i][j] = 1;
			else c[i][j] = c[i-1][j] + c[i-1][j-1];
		}
	}
	
	long long n, m, t;
	cin>>n>>m>>t;
	long long res = 0;
	
	long long b = 4;
	long long g = t-b;
	while(b<t){
		g = t-b;
		//cout<<c[n][b]<<"*"<<c[m][g]<<"\n";
		res+=(c[n][b] * c[m][g]);
		b++;	
	}
	 
	cout<<res<<"\n";
}
