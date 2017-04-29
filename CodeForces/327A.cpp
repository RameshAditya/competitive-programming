#include<bits/stdc++.h>
#define max(a,b) (a>b)?a:b
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[105];
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	int res=1;
	int occur[105];
	int optr=0;
	int ele[105];
	for(int i=0;i<n;){
		res=0;
		int j=i;
		while(j<n && a[i]==a[j])j++;
		ele[optr]=a[j-1];
		occur[optr++]=j-i;
		i=j;
	}
	int idx=0;
	int maxx=0;
	int answer=0;
	//printf("occur\n");
	//for(int i=0;i<optr;i++)printf("%d ",occur[i]);
	//printf("\n");
	if(optr>1){
		if(ele[0]==0)answer=max(answer,occur[0]+occur[1]);
		if(ele[optr-1]==0)answer=max(answer,occur[optr-1]+occur[optr-2]);
	}
	if(optr==1 && ele[0]==0)answer=n;
	else if(optr==1 && ele[0]==1)answer=0;
	else for(int i=1;i<optr-1;i++)if(ele[i]==0)answer=max(answer,occur[i-1]+occur[i]+occur[i+1]);
	printf("%d\n",answer);
	return 0;
}
