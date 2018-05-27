#include<bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> point;

bool cw(const point &a, const point &b, const point &c){
	return a.first*(b.second - c.second) + b.first*(c.second - a.second) + c.first*(a.second - b.second) < 0;	
}

vector<point> convexHull(vector<point> p){
	int n = (int)p.size();
	if(n<=1)return p;
	int k = 0;
	sort(p.begin(), p.end());
	vector<point> q(n * 2);
	for(int i = 0; i < n; q[k++] = p[i++])
		for(; k>=2 && !cw(q[k-2], q[k-1], p[i]); --k);
	for(int i = n-2, t = k; i>=0; q[k++] = p[i--])
		for(; k>t && !cw(q[k-2], q[k-1], p[i]); --k);
	q.resize(k - 1 - (q[0] == q[1]));
	return q;
}

long long triangle_area(point a, point b, point c){
	return a.first*(b.second - c.second) + b.first*(c.second - a.second) + c.first*(a.second - b.second);
}

int main(){
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<point> all(n);
		set<point> s;
		for(int i=0;i<n;i++){
			cin>>all[i].first>>all[i].second;
			s.insert(all[i]);
		}
		vector<point> c1 = convexHull(all);
		
		for(auto x:c1)s.erase(x);
		
		vector<point> c2;
		for(auto x:s) c2.push_back(x);
		
		c2 = convexHull(c2);
		
		if(c2.size()==0) cout<<"-1\n";
		else{
			long long area = 0;
			for(int i = 1; i+1<c1.size(); ++i)
				area+=abs(triangle_area(c1[0], c1[i], c1[i+1]));
			long long mn = 1e18;
			int p = 0;
			for(int i = 0; i<c1.size(); i++){
				long long curr = abs(triangle_area(c1[i], c1[(i+1)%c1.size()], c2[p]));
				long long nx, start = p;
				while(1){
					nx = abs(triangle_area(c1[i], c1[(i+1)%c1.size()], c2[(p+1)%c2.size()]));
					if(nx<=curr){
						curr = nx;
						p++;
						p%=c2.size();
					}
					else break;
					if(start == p)break;
				}
				mn = min(mn, curr);
			}
			cout<<area - mn<<"\n";
		}
	}
}
