#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int A[50001];
		for(int i=0;i<n;i++)scanf("%d",&A[i]);
		sort(A,A+n);
		int res=0;
		int l=0,r=n-1;
		while(l<=r){
			if(A[l]!=A[r]){l++;r--;res++;}
			else if(l!=r){l++;r--;res+=2;}
			else {l++;r--;res++;}
		}
		printf("%d\n",res);
	}
}
