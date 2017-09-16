#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main(){
	int t;
	int n1,n2,n3;
	long long int A[100005],B[100005],C[100005];
	long long int sum1[100005];
	long long int sum3[100005];
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&n1,&n2,&n3);
		for(int i=0;i<n1;i++)scanf("%lld",&A[i]);
		for(int i=0;i<n2;i++)scanf("%lld",&B[i]);
		for(int i=0;i<n3;i++)scanf("%lld",&C[i]);
		sort(A,A+n1);
		sort(B,B+n2);
		sort(C,C+n3);
		sum1[0]=A[0]%MOD;
		sum3[0]=C[0]%MOD;
		long long int res=0;
		for(int i=1;i<n1;i++)sum1[i]=(A[i]%MOD+sum1[i-1]%MOD)%MOD;
		for(int i=1;i<n3;i++)sum3[i]=(C[i]%MOD+sum3[i-1]%MOD)%MOD;
		sum1[n1]=sum1[n1-1];
		sum3[n3]=sum3[n3-1];
		for(int i=0;i<n2;i++){
			if(B[i]<A[0]||B[i]<C[0])continue;
			int lo1=lower_bound(A,A+n1,B[i])-A;
			int lo2=lower_bound(C,C+n3,B[i])-C;
			while(lo1<n1 && B[i]==A[lo1])lo1++;
			while(lo2<n3 && B[i]==C[lo2])lo2++;
			lo1--;
			lo2--;
			long long int x;
			x=((sum1[lo1]%MOD+((lo1+1)%MOD*B[i]%MOD)%MOD)%MOD*(sum3[lo2]%MOD+((lo2+1)%MOD*B[i]%MOD)%MOD)%MOD)%MOD;
			if(x<0)x+=MOD;
			res+=x;
		}
		printf("%lld\n",res%1000000007);
	}
}
