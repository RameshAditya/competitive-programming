// In the name of God
#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <ctime>
#include <set>
#include <map>
#include <vector>
#include <bitset>
using namespace std;

template <typename T>
T next_int() {
	T x = 0, p = 1;
	char ch;
	do { ch = getchar(); } while(ch <= ' ');
	if(ch == '-') {
		p = -1;
		ch = getchar();
	}
	while(ch >= '0' && ch <= '9') {
		x = x * 10 + (ch - '0');
		ch = getchar();
	}
	return p * x;
}
	
const int max_int = (int)1e9 + 228;
const int max_n = (int)1e6 + 228;	
const int mod = (int)1e9 + 7;

vector<int> a[max_n];
set<int> b;
vector<vector<int> > ans;

void go(int v) {
	b.erase(b.find(v));
	ans.back().push_back(v + 1);

	for(int i = 0; i < a[v].size(); i++) {
		set<int> :: iterator j = b.lower_bound(a[v][i] + 1);
		while(j != b.end()) {
			if(i == a[v].size() - 1 || *j < a[v][i + 1]) {
				go(*j);
				j = b.lower_bound(a[v][i] + 1);
			} else break;
		}
	}
}

int main() {
//	freopen(".in", "r", stdin);

	int n = next_int<int>();
	int m = next_int<int>();

	for(int i = 0; i < m; i++) {
		int x = next_int<int>() - 1;
		int y = next_int<int>() - 1;

		a[x].push_back(y);
		a[y].push_back(x);
	}

	for(int i = 0; i < n; i++) {
		b.insert(i);
		a[i].push_back(-1);
		sort(a[i].begin(), a[i].end());
	}

	for(int i = 0; i < n; i++) {
		if(b.find(i) != b.end()) {
			ans.push_back(vector<int>(0));
			go(i);
		}
	}

	cout << ans.size() << "\n";
	for(int i = 0; i < ans.size(); i++) {
		printf("%d ", (int)ans[i].size());
		for(int j = 0; j < ans[i].size(); j++) printf("%d ", ans[i][j]);
		puts("");
	}
}
