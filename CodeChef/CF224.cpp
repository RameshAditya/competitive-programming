#include<bits/stdc++.h>
using namespace std;

struct pt{
	int x;
	int y;
};

bool cmp(pt a, pt b){
	if(a.x==b.x)return a.y<b.y;
	return a.x<b.x;
}

bool cw(pt a, pt b, pt c){
	return a.x*(b.y - c.y) + b.x*(c.y - a.y) + c.x*(a.y - b.y) < 0;	
}

bool ccw(pt a, pt b, pt c){
	return a.x*(b.y - c.y) + b.x*(c.y - a.y) + c.x*(a.y - b.y) > 0;	
}

vector<pt> ch(vector<pt> a){
	if(a.size()==1)return a;
	sort(a.begin(), a.end(), cmp);
	pt p1 = a[0], p2 = a.back();
	vector<pt> up;
	vector<pt> down;
	up.push_back(p1);
	down.push_back(p1);
	
	for(int i = 1; i<a.size(); i++){
		if(i==a.size()-1 || cw(p1, a[i], p2)){
			while(up.size()>=2 && !cw(up[up.size()-2], up[up.size()-1], a[i])) 
				up.pop_back();
			up.push_back(a[i]);
		}
		if(i==a.size()-1 || ccw(p1, a[i], p2)){
			while(down.size()>=2 && !ccw(down[down.size()-2], down[down.size()-1], a[i]))
				down.pop_back();
			down.push_back(a[i]);
		}
	}
	vector<pt> final;
	for(int i=0;i<up.size();i++)final.push_back(up[i]);
	for(int i=down.size()-2;i>=0;i--)final.push_back(down[i]);
	return final;
}

double len(pt a, pt b){
	return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));	
}

int main(){
	int t=1;
	//cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pt> a(n);
		for(int i=0;i<n;i++)cin>>a[i].x>>a[i].y;
		vector<pt> c = ch(a);
		double dist = 0;
		//cout<<"CH: ";
		//for(auto aa:c)cout<<aa.x<<" "<<aa.y<<"\n";
		//cout<<"DIST:";
		for(int i=0;i<c.size();i++)dist += len(c[i], c[(i+1)%c.size()]);
		cout<<fixed<<setprecision(1)<<dist<<"\n";
	}	
}
