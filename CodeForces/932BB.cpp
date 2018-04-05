/*input
2
1 25 2
3 100 3
*/

#include <algorithm>
#include <cassert>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iostream>
#include <iomanip>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <queue>
#include <complex>
#include <exception>
#include <iosfwd>
#include <iterator>
#include <list>
#include <memory>
#include <new>
#include <stdexcept>
#include <string>
#include <typeinfo>
#include <utility>


#define ll long long int
#define vi vector<long long int>
#define mset(A,v,n) memset((A),(v),(n)*sizeof((A)[0]) ) 
#define FORi(n) for(int i=0;i<(n);i++)
#define FORj(n) for(int j=0;j<(n);j++)
#define pb push_back
#define inp(n) scanf("%lld",&(n))
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define mp(a,b) make_pair((a),(b))
#define pi pair< ll , ll >
using namespace std;

int dp[1000005];

int f(int x){
	if(dp[x]!=-1)return dp[x];
	if(x<10)return dp[x]=x;
	else{
		int c=x;
		int a=1;
		while(x>=10){
			a=1;
			int n=x;
			while(n){
				int r=n%10;
				n=n/10;
				if(r==0)continue;
				else a*=r;	
			}
			x=a;
		}
		return dp[c]=x;
	}
}

int main(){
	//std::ios_base::sync_with_stdio(0);
	int T;
	for(int i=0;i<1000005;i++)dp[i]=-1;
	for(int i=0;i<1000005;i++)f(i);
	cin>>T;
	vector< vector<int> > vals(10);
	for(int i=0;i<1000005;i++){
		if(dp[i]!=-1){
			vals[dp[i]].push_back(i);	
	//		if(dp[i]==4 && i<70)cout<<"f"<<i<<" ";
		}
	}
	//cout<<"f(4)"<<f(4)<<"\n";
	for(int t=0;t<T;t++){
		int a,b,x; //[int(i) for i in input().split(" ")]
		cin>>a>>b>>x;
		int ct=0;
		ct = upper_bound(vals[x].begin(), vals[x].end(), b) - lower_bound(vals[x].begin(), vals[x].end(), a);
	cout<<ct<<"\n";
	}
}
