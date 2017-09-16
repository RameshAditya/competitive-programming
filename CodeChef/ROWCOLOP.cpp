#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a>b)?a:b
int main(){
	int n,q;
	scanf("%d %d",&n,&q);
	int row[n],col[n];
	for(int i=0;i<n;++i){row[i]=0;col[i]=0;}
	
	while(q--){
		char s[10];
		int r,x;
		scanf("%s%d%d",s,&r,&x);
		if(s[0]=='R'){
			row[r-1]+=x;
		}
		else{
			col[r-1]+=x;
		}
	}
	//for(int i=0;i<n;++i)printf("%d %d\n",row[i],col[i]);
	int res=0;
	int maxr=0;
	int maxc=0;
	for(int i=0;i<n;++i){
		maxr=max(maxr,row[i]);
		maxc=max(maxc,col[i]);
	}
	res=maxr+maxc;
	printf("%d\n",res);
}
