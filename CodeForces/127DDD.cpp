#include <iostream>
#include <cstdio>
#include <set>
#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

char s[1100000];
int n;

vector<int> z_function () {
	vector<int> z (n);
	for (int i=1, l=0, r=0; i<n; ++i) {
		if (i <= r)
			z[i] = min (r-i+1, z[i-l]);
		while (i+z[i] < n && s[z[i]] == s[i+z[i]])
			++z[i];
		if (i+z[i]-1 > r)
			l = i,  r = i+z[i]-1;
	}
	return z;
}

int main() {

	gets(s);
	n = strlen(s);

	vector <int> v = z_function();

	int curres = 0;
	for (int i = 1; i < v.size(); ++i)
		if (i + v[i] - 1 < n - 1) {
			curres = max(curres, v[i]);
		} else
			curres = max(curres, v[i] - 1);

	int curres2 = 0;
	for (int i = 1; i < v.size(); ++i) {
		if (i + v[i] - 1 == n - 1) {
			if (v[i] <= curres) curres2 = max(v[i], curres2);
		}
	}

	int res = curres2;
	if (res == 0) {
		cout << "Just a legend" << endl;
	} else {
		for (int i = 0; i < res; ++i)
			printf("%c", s[i]);
		printf("\n");
	}

	return 0;
}
