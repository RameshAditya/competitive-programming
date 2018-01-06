#include<bits/stdc++.h>
using namespace std;

long long int ans,p,a,h[10004],i,n,f;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>f;
		for(i=0;i<n;i++){
			cin>>a;
			while(a%f==0)a/=f;
			h[i]=a;
		}
		sort(h,h+n);
		a=h[0]; p=1; ans=0;
		for(i=1;i<n;i++){
			if(h[i]!=a){
				a=h[i];
				p=0;
			}
			ans+=p;
			p++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
