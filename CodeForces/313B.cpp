#include<stdio.h>
#include<string.h>

int main(){
	char s[100002]; scanf("%s",s);
	int m; scanf("%d",&m);
	int sum[100002]={0};
	int k=0;
	for(int i=1;s[i]!='\0';i++)
		if(s[i]==s[i-1]){k++;sum[i+1]=sum[i]+1;}
		else sum[i+1]=sum[i];
	while(m--){
		int l,r;
		scanf("%d %d",&l,&r);
		printf("%d\n",sum[r]-sum[l]);
	}
}
