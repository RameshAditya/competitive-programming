#include <iostream>
#include <vector>
using namespace std;

void next(int n, vector<long long> a, int m, vector<int> w, vector<int> h){
    for (int i = 0; i < m; i++){
        long long p = a[0] > a[w[i] - 1] ? a[0] : a[w[i] - 1];
        a[0] = p + h[i];
        cout << p << endl;
    }
}

int main(){
    int n, m;
    vector<long long> a;
    vector<int> w, h;
    cin >> n; a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m; w.resize(m); h.resize(m);
    for (int i = 0; i < m; i++) cin >> w[i] >> h[i];
    next(n, a, m, w, h);
    return 0;
}
