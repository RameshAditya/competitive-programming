#include<stdio.h>

int main(){
	char s[101];
	char ans[201];
	int ansptr=0;
	scanf("%s",s);
	int i=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='Y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='y'||s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')continue;
		else{
			ans[ansptr++]='.';
			if(s[i]-'A'>=0 && s[i]-'A'<=26)ans[ansptr++]=s[i]-'A'+'a';
			else ans[ansptr++]=s[i];
		}
	}
	ans[ansptr]='\0';
	printf("%s",ans);
}
