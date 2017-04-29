#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,q;
	char key[101][51],val[101][51];
	scanf("%d %d",&n,&q);
	for(int i=0;i<n;++i)scanf("%s %s",key[i],val[i]);
	for(int i=0;i<q;++i){
		char s[101];
		scanf("%s",s);
		char subscript[101];
		int ok=0;
		int last;
		for(int i=0;s[i]!='\0';i++)
		{
			if(s[i]=='.')
			last=i;
		}
		for(int i=last;s[i]!='\0';++i)subscript[i-last]=s[i];
		subscript[i-last]='\0';
		for(int i=0;i<n;i++)if(strcmp(subscript,key[i])==0){printf("%s\n",val[i]);ok=1;}
		if(ok==0)printf("invalid");
	}
}
