#include<cstdio>
#include<vector>

using namespace std;

int main(){
	int n,m; scanf("%d %d",&n,&m);
	vector<long> v(n+1);
	for(int i=1;i<=n;i++)scanf("%ld",&v[i]);
	long tot=0;
	for(int j=0;j<m;j++){
		int a,b;
		scanf("%d %d",&a,&b);
		tot+=(v[a]>v[b])?v[b]:v[a];
	}
	printf("%ld\n",tot);
}
