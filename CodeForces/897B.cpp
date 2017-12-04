#include<bits/stdc++.h>
using namespace std;

long long int nod(long long int x){
	long long int res=0;
	while(x){
		x/=10;
		res++;
	}
	return res;
}

long long int rev(long long int x){
	long long int ans=0;
	while(x){
		ans=10*ans+x%10;
		x/=10;
	}
	return ans;
}

long long int res[100005];

int main(){
	long long int n,p;
	std::ios_base::sync_with_stdio(0);
	cin>>n>>p;
	long long int ans=0;
	for(int i=0;i<200010 && n>0;i++){
		if(nod(i)&1==1){
			ans+=pow(10,nod(i))*i+rev(i);
			ans%=p;
			n--;
		}
	}
	cout<<ans<<"\n";
}
