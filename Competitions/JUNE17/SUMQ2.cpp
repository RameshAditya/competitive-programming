#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int n1,n2,n3;
	long long int A[10005],B[10005],C[10005];
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&n1,&n2,&n3);
		for(int i=0;i<n1;i++)scanf("%lld",&A[i]);
		for(int i=0;i<n2;i++)scanf("%lld",&B[i]);
		for(int i=0;i<n3;i++)scanf("%lld",&C[i]);
		sort(A,A+n1);
		sort(B,B+n2);
		sort(C,C+n3);
		long long int res=0;
		for(int i=0;i<n2;i++){
			for(int j=0;j<n1;j++){
				for(int k=0;k<n3;k++){
					if(B[i]>=A[j]&&B[i]>=C[k])
						res+=((A[j]+B[i])%1000000007*(B[i]+C[k])%1000000007)%1000000007;
				}
			}
		}
		printf("%lld\n",res%1000000007);
	}
}
