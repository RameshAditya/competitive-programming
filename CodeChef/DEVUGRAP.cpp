#include<stdio.h>
#include<math.h>

#define min(a,b) ((a)<(b))?(a):(b)
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int ans=0;
		int n,k,x;
		scanf("%d %d",&n,&k);
		while(n--){
			scanf("%d",&x);
			ans+=min(abs(x-(floor(x/k)*k)),abs(x-(ceil((float)x/k)*k)));
		}
		printf("%d\n",ans);
	}
}
