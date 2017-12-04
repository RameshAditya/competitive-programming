#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a>b)?a:b

int main(){
	std::ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int ans=1;
	for(int k=0;k<20;k++){
		int res=((1<<(2*k-1)) - (1<<(k-1)));
		if(res!=0 && n%res==0)ans=max(ans,res);
	}
	cout<<ans;
}
