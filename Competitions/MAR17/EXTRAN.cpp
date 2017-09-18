#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		vector<int> v;
		for(int i1=0;i1<n;i1++){
			int x; scanf("%d",&x);
			v.push_back(x);
		}
		int a=-1;
		int in=-1;
		int flag=0;
		sort(v.begin(),v.end());
		//for(int k=0;k<n;k++)printf("%d ",v[k]);
		for(int i=0;i<n-1;i++){
			if(v[i]+1==v[i+1])continue;
			else{
				if(i==0)a=v[i];
				else a=v[i+1];
				flag=1;
			}
		}
		if(flag==0)a=v[n-1];
		printf("%d\n",a);
	}
}
