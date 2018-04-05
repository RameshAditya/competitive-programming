#include<bits/stdc++.h>
using namespace std;

int val(int x, int y){
	int ct=0;
	while(1){
		if(x==1 && y==1)return ct;
		if(x<1 || y<1)return 1e7;
		if(x>=y)x-=y;
		else y-=x;
		ct++;
	}
}

int main(){
	int n;
	cin>>n;
	int res=1e7;
	for(int i=1;i<=n;i++)res=min(res, val(n, i));
	cout<<res;	
}
