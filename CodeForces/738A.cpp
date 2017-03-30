#include<stdio.h>
#include<string.h>
int main(){
	char s[101];
	int n; scanf("%d",&n);
	scanf("%s",s);
	for(int i=0;i<strlen(s)-2;i++){
		int j;
		int no=0;
		if(s[i]=='o' && s[i+1]=='g' && s[i+2]=='o'){
			int j=i+3;
			if(j<strlen(s)-2)while(s[j]=='g'&&s[j+1]=='o')j+=2;
			//while(no--)printf("**");
			i=j;
		}else printf("%c",s[i]);
	}
}
