#include<stdio.h>

int main(){
	int k,q,ct[26];
	char A[1001];
	scanf("%d %s",&k,A);
	int i;
	int flag=0;
	for(i=0;i<26;i++)ct[i]=0;
	for(i=0;A[i]!='\0';i++)ct[A[i]-'a']++;
	for(i=0;A[i]!='\0';i++)if(ct[i]%k!=0)flag=1;
	if(flag||k==0)printf("-1\n");
	else{
		char base[1001];
		int len=0;
		for(i=0;i<26;i++){
			int q=ct[i]/k;
			while(q-->0)base[len++]='a'+i;
		}
		int j;
		for(i=0;i<k;i++)for(j=0;j<len;j++)printf("%c",base[j]);
	}
}
