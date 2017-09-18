#include<stdio.h>

int main(){	
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int sox=0;
		int eox=0;
		int soy=0;
		int eoy=0;
		int odd=1;
		int x;
		for(int ix=0;ix<n;ix++){
			if(odd){
				scanf("%d",&x);
				sox+=x;
				odd^=1;
			}
			else{
				scanf("%d",&x);
				eox+=x;
				odd^=1;
			}
		}
		odd=1;
		for(int ix=0;ix<n;ix++){
			if(odd){
				scanf("%d",&x);
				soy+=x;
				odd^=1;
			}
			else{
				scanf("%d",&x);
				eoy+=x;
				odd^=1;
			}
		}	
	if(soy+eox<sox+eoy)printf("%d\n",soy+eox);
	else printf("%d\n",sox+eoy);
	}
}
