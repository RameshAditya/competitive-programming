#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	long long sum, result1, result2;
 
	while (t--) {
		sum = result1 = 0;
		result2 = LLONG_MAX;
		cin >> n;
		long long A[n];
 
		for (int i = 0; i < n; i++) {
			cin >> A[i];
			sum ^= A[i];
		}
 
		for (int i = 0; i < n; i++) {
			result1 = sum ^ A[i];
			result2 = min(result2, abs(A[i] - result1));
		}
 
		cout << result2 << "\n";
	}
 
	return 0;
} 
