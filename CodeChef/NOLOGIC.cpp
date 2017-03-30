#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[315];
		char occ[26]={0};
		int done[26]={0};
		gets(s);
		for(int i=0;s[i]!='\0';i++){
			if((s[i]-'a'>=0 && 'z'-s[i]>=0)||(s[i]-'A'>=0 && 'Z'-s[i]>=0)){
			if(s[i]-'A'>=0){occ[s[i]-'A']++;done[s[i]-'A']=1;}
			else {occ[s[i]-'a']++;done[s[i]-'a']=1;}
			}
		}
		int f=0;
		for(int i=0;i<26;i++)if(done[i]==0){printf("%c",i+'a');f=1;break;}
		if(f==0)printf("~");
	}
}
