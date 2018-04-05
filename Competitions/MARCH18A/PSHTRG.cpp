#include<bits/stdc++.h>
using namespace std;

vector<long long> tree[400500];
vector<long long> values;
long long A[100500];
long long build(long long node, long long start, long long end){
	if(start == end){
		tree[node].push_back(A[start]);
	}
	else{
		long long mid = (start + end)>>1;
		build(node<<1, start, mid);
		build(node<<1|1, mid+1, end);
		vector<long long> temp;
		
		long long sz=49;
		
		int x = tree[node<<1].size()-1;
		int y = tree[node<<1|1].size()-1;
		
		//int lowerx = max(0, x-60);
		//int lowery = max(0, y-60);
		
		sort(tree[node<<1].begin(), tree[node<<1].end());
		sort(tree[node<<1|1].begin(), tree[node<<1|1].end());
			
		for(auto i:tree[node<<1])temp.push_back(i);
		for(auto i:tree[node<<1|1])temp.push_back(i);
		
		sort(temp.begin(), temp.end());
		for(int i=max(0, (int)(temp.size())-50);i<temp.size();i++)tree[node].push_back(temp[i]);
		
		//sort(tree[node].begin(), tree[node].end());
	}
}

long long query(long long node, long long start, long long end, long long l, long long r){
	if(l>end||r<start)return -1e9;
	if(l<=start && end<=r){
		for(auto i:tree[node]){
			//cout<<"Inserting into values i = "<<i<<"\n";
			values.push_back(i);
		}
	}
	else{
		long long mid = (start + end)>>1;
		query(node<<1, start, mid, l, r);
		query(node<<1|1, mid+1, end, l, r);
	}	
}


//YOURE OVERWRITING SOME OTHER EQUAL ELEMENT IN UPDATE
long long update(long long node, long long start, long long end, long long idx, long long val, long long old){
	if(start == idx){
		tree[node][0] = val;
		A[idx] = val;
		//cout<<"In tree["<<node<<"] contains: ";
		//for(auto i:tree[node])cout<<i<<" ";
		//cout<<"\n";
	}
	else{
		long long mid = (start + end)>>1;
		
		if(start<=idx && idx<=mid)
			update(node<<1, start, mid, idx, val, old);	
		else
			update(node<<1|1, mid+1, end, idx, val, old);
		
		auto it = lower_bound(tree[node].begin(), tree[node].end(), old) - tree[node].begin();
		
		if(tree[node][it] == old)tree[node][it] = val;
		sort(tree[node].begin(), tree[node].end());
	}
}

long long istriangle(long long a, long long b, long long c){
	return (a+b)>c && (b+c)>a && (a+c)>b;	
}

int main(){
	std::ios_base::sync_with_stdio(0);//cin.tie(0);
	long long n, q;
	cin>>n>>q;
	memset(A, 0, sizeof(A));
	for(long long i=0;i<n;i++)cin>>A[i];
	build(1, 0, n-1);
	
	while(q--){
		//values.clear();
		values.resize(0);
		long long type, l, r;
		cin>>type>>l>>r;
		if(type==2){
			if(r-l+1<3){
				cout<<"0\n";
				continue;
			}
			
			query(1, 0, n-1, l-1, r-1);
			vector<long long> X;
			long long ss=0;
			//cout<<values.size()<<" = size\n";
			
			for(auto i:values)X.push_back(i), ss++;
			//cout<<"\n";
			sort(X.begin(), X.end());
			long long ok=1;
			long long res=0;
			for(long long i=ss-1;i>=2;i--){
				if(istriangle(X[i], X[i-1], X[i-2])){
					ok=0;
					res = max(res, X[i]+X[i-1]+X[i-2]);
					
				}
			}
			if(ok)cout<<"0\n"; else cout<<res<<"\n";
		}
		else
			//n+=0;
			update(1, 0, n-1, l-1, r, A[l-1]);
	}
}

