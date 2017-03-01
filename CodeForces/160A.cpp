#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> v;
	int n;
	int sum=0;
	scanf("%d",&n);
	int i;
	int tot=0;
	int x;
	for(i=0;i<n;i++){scanf("%d",&x);v.push_back(x);tot+=x;}
	sort(v.begin(),v.end());
	int reqd=tot/2;
	int taken=0;
	for(i=n-1;i>=0;i--)if(sum>reqd)break;else{sum+=v[i];taken++;}
	printf("%d\n",taken);
}
