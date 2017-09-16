#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	scanf("%d%d",&n,&q);
	int A[100005];
	for(int i=0;i<n;i++)scanf("%d",&A[i]);	
	while(q--){
		int type;
		scanf("%d",&type);
		if(type==1){
			int i,k;
			scanf("%d%d",&i,&k);
			int res=i-1;
			int curmax=A[i-1];
			int curdist=i-1;
			for(int j=i-1;j<n;j++){
				if(k>0 && j-curdist<=100){
					if(A[j]>curmax){
						curmax=A[j];
						k--;
						curdist=j;
						res=j;
					}
				}
				else break;
			}
			printf("%d\n",res+1);
		}
		else{
			int l,r,x;
			scanf("%d%d%d",&l,&r,&x);
			for(int i=l-1;i<r;i++)A[i]+=x;	
		}
	}
} 
