#include<bits/stdc++.h>
#define max(a,b) (a>b)?a:b
using namespace std;
int main(){
	int n,k,p;
	scanf("%d%d%d",&n,&k,&p);
	int A[1005];
	char s[1005];
	for(int i=0;i<n;++i)scanf("%d",&A[i]);
	scanf("%s",s);
	int ans=0;
	int temp;
	int ct;
	for(int q=0;s[q]!='\0';++q){
		if(s[q]=='!'){
			temp=A[n-1];
			for(int i=n-1;i>0;i--)A[i]=A[i-1];
			A[0]=temp;
		}
		else{
			ans=0;
			int j;
			for(int i=0;i<n;i++){
				j=0;
				ct=0;
				while(i+j<n && j<k){
					if(A[i+j]==1)ct++;
					j++;
				}
				ans=max(ans,ct);
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
