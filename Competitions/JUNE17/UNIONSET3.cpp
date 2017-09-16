#include<bits/stdc++.h>
using namespace std;
int a[2501][2501];
int hasha[2501][2501];
int lens[2501];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		for(int i=0;i<n+1;i++)for(int j=0;j<k+1;j++)hasha[i][j]=0;
		for(int i=0;i<n;i++){
			scanf("%d",&lens[i]);
			for(int j=0;j<lens[i];j++)scanf("%d",&a[i][j]);
			for(int j=0;j<lens[i];j++)hasha[i][a[i][j]]=1;
		}
		int res=0;
		for(int i=0;i<n;i++){
			//if(lens[i]==k){res+=n-1;continue;}
			for(int j=i+1;j<n;j++){
				if(lens[i]+lens[j]>=k){
					int ok=1;
					for(int m=1;m<=k;m++)if(hasha[i][m]==0&&hasha[j][m]==0)ok=0;
					if(ok)res++;
				}
			}
		}
		printf("%d\n",res);
	}
}
