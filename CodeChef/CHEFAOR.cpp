#include <bits/stdc++.h>
using namespace std;
#define SZ(x) ( (int) (x).size() )
#define dbg(x) cerr << #x << " = " << x << endl;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
typedef long long ll;
typedef pair<int, int> pii;
// const int INF = 1e9;
const int MAXN = 5005;
const int LOG = 31;
 
int T, N, K;
int A[MAXN];
int B[MAXN][LOG], M[MAXN][LOG];
int L[MAXN];
 
ll dp[MAXN][MAXN];
 
int main(){
  srand(123456);
  scanf("%d", &T);
  while(T--){
    scanf("%d%d", &N, &K);
    ll sum = 0;
    for(int i = 1; i <= N; i++){
      scanf("%d", A + i);
      sum += A[i];
    }
    if(K == N){
      printf("%lld\n", sum);
    } else {
      for(int i = 1; i <= N; i++){
        L[i] = 0;
        for(int j = i, mask = 0; j >= 1; j--){
          if((mask | A[j]) != mask){
            mask |= A[j];
            B[i][L[i]] = j;
            M[i][L[i]] = mask;
            L[i]++;
          }
        }
      }
      for(int i = 1; i <= N; i++){
        int m = min(i, K);
        for(int j = 1; j <= m; j++){
          dp[i][j] = 0;
          for(int k = 0; k < L[i]; k++){
            dp[i][j] = max(dp[i][j], dp[B[i][k] - 1][j - 1] + M[i][k]);
          }
        }
      }
      printf("%lld\n", dp[N][K]);
    }
  }
  return 0;
}
