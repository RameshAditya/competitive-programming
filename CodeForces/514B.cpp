#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, xi, yi;
	cin>>n>>xi>>yi;
	int x[n],y[n];
	for(int i=0;i<n;i++)cin>>x[i]>>y[i];
	
	int ct=0;
	int alive[n];
	//memset(alive, 1, sizeof(alive));
	for(int i=0;i<n;i++)alive[i]=1;
	int ans=0;
	for(int i=0;i<n;i++){
		if(alive[i])
			for(int j=i+1;j<n;j++){
				if((y[i]-yi)*(x[j]-xi) == (y[j]-yi)*(x[i]-xi))alive[j]=0;
			}
	}
	for(int i =0;i<n;i++)ans+=(alive[i]);
	cout<<ans<<"\n";
}
