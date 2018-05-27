#include<bits/stdc++.h>
using namespace std;

struct pt{
	long long x;
	long long y;
};

bool cmp(pt a, pt b){
	if(a.x==b.x)return a.y<b.y;
	return a.x<b.x;
}

long long cw(pt a, pt b, pt c){
	return a.x*(b.y - c.y) + b.x*(c.y - a.y) + c.x*(a.y - b.y) < 0;
}

long long ccw(pt a, pt b, pt c){
	return a.x*(b.y - c.y) + b.x*(c.y - a.y) + c.x*(a.y - b.y) > 0;
}

long long getarea(pt a, pt b, pt c){
	return a.x*(b.y - c.y) + b.x*(c.y - a.y) + c.x*(a.y - b.y);
}

vector<pt> ch(vector<pt> a){
	pt p1 = a[0];
	pt p2 = a.back();
	vector<pt> up;
	vector<pt> down;
	up.push_back(p1);
	down.push_back(p1);
	for(long long i=0;i<a.size();i++){
		if(i==a.size() - 1|| cw(p1, a[i], p2)){
			while(up.size()>=2 && !cw(up[up.size()-2], up[up.size()-1], a[i]))up.pop_back();
			up.push_back(a[i]);
		}
		if(i==a.size() - 1|| ccw(p1, a[i], p2)){
			while(down.size()>=2 && !ccw(down[down.size()-2], down[down.size()-1], a[i]))down.pop_back();
			down.push_back(a[i]);
		}
	}
	vector<pt> ans;
	for(long long i=0;i<up.size();i++)ans.push_back(up[i]);
	for(long long i=down.size()-2;i>=0;i--)ans.push_back(down[i]);
	return ans;
}

int main(){
	long long t;
	std::ios_base::sync_with_stdio(0);
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long> A(n);
		vector<long long> mx(n);
		vector<long long> mn(n);
		for(long long i =0 ;i<n;i++){
			cin>>A[i];
			mx[i] = 0;
			mn[i] = 1e9;
		}
		mx[n-1] = A[n-1];
		mn[n-1] = A[n-1];
		for(long long i=n-2;i>=0;i--){
			mx[i] = max(A[i+1], mx[i+1]);	
			mn[i] = min(A[i+1], mn[i+1]);
		}

		vector<pt> in;
		for(long long i=0;i<n-1;i++){
			pt temp;
			temp.x = A[i];
			temp.y = mx[i];
			in.push_back(temp);
		}
		for(long long i=0;i<n-2;i++){
			pt temp;
			temp.x = A[i];
			temp.y = mn[i];
			in.push_back(temp);	
		}
		sort(in.begin(), in.end(), cmp);
		//for(auto i:in)cout<<i.x<<" "<<i.y<<"\n";
		vector<pt> hull = ch(in);	
		long long area = 0;
		for(long long i=1;i<hull.size();i++)area += getarea(hull[0], hull[i], hull[(i+1)%hull.size()]);
		cout<<abs(area)<<"\n";
	
	}
}
