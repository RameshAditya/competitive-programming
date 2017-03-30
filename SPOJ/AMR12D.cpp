#include<stdio.h>
#include<string.h>
int main(){
	int t; scanf("%d",&t);
	while(t--){
		char s[100];
		scanf("%s",s);
		//reverse(s.begin(),s.end());
		int flag=0;
		for(int i=0;i<strlen(s);i++)if(s[i]!=s[strlen(s)-i-1])flag=1;
		if(flag)printf("NO\n");
		else printf("YES\n");
	}
}
