#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("in01.txt", "w", stdout);
		//freopen("out01.txt", "w", stdout);
	#endif
	int t=10;
	cout<<10<<"\n";
	while(t--){
		srand(t);
		int n, k;
		n=1+rand()%1000;
		k=1+rand()%1000;
		cout<<n<<" "<<k<<"\n";
		for(int i=0;i<n;i++)if(i!=n-1)cout<<1+rand()%1000<<" ";else cout<<1+rand()%1000<<"\n";
		
	}
}
