#include<bits/stdc++.h>
using namespace std;
const int N = 2005;
int n , m;
char arr[N][N];
int cnt[N];
unsigned ans = 0;
int main(){
	scanf("%d %d" , &n , &m);
	for(int i = 1 ; i <= n ; ++i){
		scanf("%s" , arr[i] + 1);
	}
	for(int i = n ; i >= 1 ; --i){
		for(int j = 1 ; j <= m ; ++j){
			cnt[j] = (arr[i][j] - '0') ? cnt[j] + 1 : 0;
		}
		int mx = 0;
		for(int j = 1 ; j <= m ; ++j){
			mx = min(mx + 1 , cnt[j]);
			ans += mx;
		}
	}
	printf("%u" , ans);
} 
