#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int prv = -1;
	long long res = 0;
	
	for(int i = 0; i < n; i++){
		int v;
		cin >> v;
		if(v == 1){
			if(prv == -1){
				res = 1;
			}
			else{
				res *= i - prv;
			}
			prv = i;
		}
	}
	
	cout << res <<'\n';
}
