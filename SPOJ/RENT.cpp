#include<bits/stdc++.h>
using namespace std;

long long n;
struct data{
	long long st, ed, val;
} A[10010];

long long dp[10010], B[10010];

bool cmp(data l, data r){
	return l.st<r.st;
}

long long solve(long long i){
	if(i>=n)return 0;
	if(dp[i]!=-1)return dp[i];
	dp[i] = solve(i+1);
	long long k = lower_bound(B, B+n, A[i].ed) - B;
	dp[i] = max(dp[i], A[i].val + solve(k));
	return dp[i];	
}

int main(){
	long long cs, t, i, j, k, x, y, z, ans, q, m;
	scanf("%lld",&t);
	for(cs = 1; cs<=t;cs++){
		scanf("%lld",&n);
		for(i = 0;i<n;i++){
			scanf("%lld",&A[i].st);
			B[i] = A[i].st;
			scanf("%lld",&x);
			A[i].ed = A[i].st + x;
			scanf("%lld",&A[i].val);
		}
		sort(A, A+n, cmp);
		sort(B,B+n);
		memset(dp, -1, sizeof(dp));
		printf("%lld\n", solve(0));
	}
}
