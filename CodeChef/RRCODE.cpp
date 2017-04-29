#include<bits/stdc++.h>
using namespace std;
int min(int a, int b) {return a<b?a:b;}
void x(int& a, int b) { a^=b; }
void a(int& a, int b) { a&=b; }
void o(int& a, int b) { a|=b; }
int main () {
    int T;
    scanf("%d", &T);
    while(T--) {
        int N, K, Ans;
        scanf("%d%d%d", &N, &K, &Ans);
        int A[N];
        for(int i=0; i<N; i++)scanf("%d", &A[i]);
        char opr[10];
        scanf("%s", opr);
        auto op = x;
        if(opr[0]=='A')op=a, K=min(K,1); else if(opr[0]=='O')op=o, K=min(1, K); else K&=1;
        while(K--)
            for(int i=0; i<N; i++)
                op(Ans, A[i]);
        printf("%d\n", Ans);

    }
}
