#include<algorithm>
#include<cstdio>
 
using namespace std;
 
int N, M, Q, L, U;
 
int main() {
    for(;;) {
        scanf("%d %d", &N, &M);
        if(N == 0 && M == 0) break;
        int plot[N][M];
        for(int i = 0; i < N; i++)
            for(int j = 0; j < M; j++)
                scanf("%d", &plot[i][j]);
        scanf("%d", &Q);
        for(int i = 0; i < Q; i++) {
            scanf("%d %d", &L, &U);
            int curr_max = 0;
            for(int j = 0; j < N; j++) {
                int* lb = lower_bound(plot[j], plot[j] + M, L);
                int min_ind = lb - plot[j];
                for(int k = curr_max; k < N; k++) {
                    if(j + k >= N || min_ind + k >= M || plot[j + k][min_ind + k] > U) break;
                    if(k + 1 > curr_max) curr_max = k + 1;
                }
            }
            printf("%d\n", curr_max);
        } printf("-\n");
    }
    return 0;
}
