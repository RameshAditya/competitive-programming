/*input
5
weird
*/
#include <algorithm>
#include <cassert>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <iomanip>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <queue>
#include <string>
#define ll long long int
#define vi vector<long long int>
#define mset(A,v,n) memset((A),(v),(n)*sizeof((A)[0]) )
#define FORi(n) for(int i=0;i<(n);i++)
#define FORj(n) for(int j=0;j<(n);j++)
#define pb push_back
#define mp(a,b) make_pair((a),(b))
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define pi pair< ll, ll >
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int v[n];
	for(int i=0;i<n;i++)v[i]=1;
	for(int i=0;i<n-1;i++){
		if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y') && (s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'||s[i+1]=='y'))v[i+1]=0;
	}
	for(int i=0;i<n;i++)if(v[i])cout<<s[i];
}
