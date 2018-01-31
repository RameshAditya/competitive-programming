#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	vector<int> A(n);
	
	map<int, int> oc;
	
	for(int i=0;i<n;i++){
		cin>>A[i];
		oc[A[i]]=1;
	}
	map<int, int> ma;
	for(int i=n-1;i>=0;i--){
		
		//add in number to list of options
		ma[A[i]]++;
		oc[A[i]]=max(oc[A[i]], ma[A[i]]);
		
		//iterate over all possible next neighbours
		for(int j=1;j<=k;j++){
			if(ma.find(A[i]+j)!=ma.end()){
				oc[A[i]]=max(oc[A[i]], 1+oc[A[i]+j]);
			}
			
			if(ma.find(A[i]-j)!=ma.end()){
				oc[A[i]]=max(oc[A[i]], 1+oc[A[i]-j]);
			}
		}
	}
	cout<<oc[A[0]];
}

/*
4 5
1 3 50 4 2 
*/
