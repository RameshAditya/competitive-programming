#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[1000005];
		scanf("%s",s);
		int res=0;
		int maxres=0;
		for(int i=0;s[i]!='\0';++i){
			if(s[i]=='<')res++;
			if(s[i]=='>')
			{res--;
				if(res<0)break;
				if(res==0)
				maxres=max(maxres,i+1);
			}
		}
		printf("%d\n",maxres);
	}
	return 0;
}
