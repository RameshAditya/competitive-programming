#include<bits/stdc++.h>
using namespace std;

int main(){
		#ifndef ONLINE_JUDGE
		freopen("in04.txt", "r", stdin);
//		freopen("out5.txt", "w", stdout);
	#endif
	int n, A[1000],q;
	cin>>n>>q;
	int cu=-1;
	for(int i=0;i<n;i++)A[i]=1;
	while(q--){
		cu++;
		char x;
		int l, r;
		cin>>x>>l>>r;
		
		
		if(x=='!')for(int i=l;i<=r;i++)A[i]=0;
		else {
			int sum=0;
			for(int i=l;i<=r;i++)sum+=A[i];
			cout<<cu<<":"<<sum<<"\n";
		}
	}
}
/*
//const ll mxn = 2e5;
int n, m;
int A[20000];

int main() {
	//cppio;
	cin >> n >> m;
	for (int i = 0; i < n; i++) A[i] = 1;
	int l, r;
	char tp;
	int xx=-1;
	while (m--) {
		xx++;
		cin >> tp >> l >> r;
		l--; r--;
		if (tp == '!') {
			for (int i = l; i <= r; i++) A[i] = 0;
		} else {
			int ans = 0;
			for (int i = l; i <= r; i++) ans += A[i];
			cout << xx << ":" << ans << "\n";
		}
	}
	return 0;
}*/
