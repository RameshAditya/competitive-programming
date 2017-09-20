#include<bits/stdc++.h>
using namespace std;
int main(){
	char hsh[26];
	for(int i=0;i<26;i++)hsh[i]=0;
	char s1[1005];
	char s2[1005];
	scanf("%s %s",s1,s2);
	for(int i=0;i<26;i++)hsh[s1[i]-'a']=s2[i];
	char s3[1005];
	scanf("%s",s3);
	for(int i=0;s3[i]!='\0';i++)if((s3[i]-'a'>=0 && s3[i]-'z'<=0))printf("%c",hsh[s3[i]-'a']);
	else if(s3[i]-'A'>=0 && s3[i]-'Z'<=0)printf("%c",toupper(hsh[s3[i]-'A']));
	else printf("%c",s3[i]);
	printf("\n");
}
