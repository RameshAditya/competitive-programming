#include<math.h>
#include<stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int ct=0;
		int n;
		int i;
		int X[3],Y[3];
		scanf("%d",&n);
		for(i=0;i<3;i++){
			scanf("%d %d",&X[i],&Y[i]);
		}
		if(pow((X[0]-X[1]),2)+pow((Y[0]-Y[1]),2) <= n*n){
			ct++;
		}
		if(pow((X[2]-X[1]),2)+pow((Y[2]-Y[1]),2) <= n*n){
			ct++;
		}
		if(pow((X[0]-X[2]),2)+pow((Y[0]-Y[2]),2) <= n*n){
			ct++;
		}
		if(ct>=2) printf("yes\n");
		else printf("no\n");
	}}
