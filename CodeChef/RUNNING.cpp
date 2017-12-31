#include<bits/stdc++.h>
using namespace std;

int A[100005], K[100005], diff[100005];
int t,n,k;

vector<int>  build(int pat[], int m){
	int i=1;
	int j=0;
	vector<int> lps(m,0);
	while(i<m){
		if(pat[i]==pat[j]){
			lps[i]=lps[j]+1;
			i++;
			j++;
		}
		else{
			if(j!=0)j=lps[j-1];
			else{
				lps[i]=0;
				i++;
			}
		}
	}
	return lps;
}

int match(int txt[], int n, int pat[], int m){
	vector<int> lps=build(pat,m);
	int i=0;
	int j=0;
	int res=0;
	while(i<n){
		if(pat[j]==txt[i]){
			i++;
			j++;
		}
		if(j==m){
			res++;
			j=lps[j-1];
		}
		if(pat[j]!=txt[i]){
			if(j!=0)j=lps[j-1];
			else i++;
		}
	}
	return res;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	cin>>t;
	while(t--){
		cin>>n>>k;		
		for(int i=0;i<n;i++)cin>>A[i];
		for(int i=0;i<k;i++)cin>>K[i];
		for(int i=0;i<n-1;i++)diff[i]=A[i+1]-A[i];
		cout<< match(diff, n-1, K, k)<<"\n";
	}
}		
