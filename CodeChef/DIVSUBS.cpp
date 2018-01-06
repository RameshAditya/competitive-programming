#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1];
		int freq[n+1]={0};
		int temp = 0, small = 0, large = 0;
		freq[0] = 1;
		for(int i=1;i<=n;i++) {
			cin >> a[i];
			temp = (temp + a[i]) % n;
			if (freq[temp]) {
				small = freq[temp], large = i;
			}
			freq[temp] = i+1;
		}
		cout << large-small+1 << endl;
		while (small <= large) {
			cout << small++ << " ";
		}
		cout << endl;
	}
}
