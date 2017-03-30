#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);	
		pair<int,int> A[n];
		for(int i=0;i<n;i++){
			int a,b;
			scanf("%d %d",&a,&b);
			A[i].first=a;
			A[i].second=b;
		}
		int ans=1;
		sort(A,A+n);
		int b=A[0].second;
		for(int i=1;i<n;i++){
			if(A[i].second<b) b=A[i].second;
			else if(A[i].first > b){ b=A[i].second; ans++;}
		}
		printf("%d\n",ans);
	}
}
