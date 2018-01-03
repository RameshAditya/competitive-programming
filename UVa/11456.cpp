#include<bits/stdc++.h>
using namespace std;
int main(){
	//std::ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int A[n];
		
		for(int i=0;i<n;i++)
			cin>>A[i];
		
		vector<int> lis(n+1, 1);
		vector<int> lds(n+1, 1);
		
		//memset(lis, 1, sizeof(lis));
		//memset(lds, 1, sizeof(lds));
		
		for(int i=0;i<n;i++)
			for(int j=i-1;j>=0;j--)
				if(A[i]>A[j])lis[i]=max(lis[i], lis[j]+1);
		
		for(int i=0;i<n/2;i++){
			int temp=A[i];
			A[i]=A[n-i-1];
			A[n-i-1]=temp;
		}
		//for(int i=0;i<n;i++)cout<<"A["<<i<<"]="<<A[i]<<"\n";
		
		for(int i=0;i<n;i++)
			for(int j=i-1;j>=0;j--)
				if(A[i]>A[j])lds[i]=max(lds[i], lds[j]+1);
		
		int res=0;
		for(int i=0;i<n;i++)res=max(res, lis[i]+lds[n-i-1]-1);
		
		cout<<res<<"\n";
	}
}
