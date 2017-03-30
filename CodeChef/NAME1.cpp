#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[50000];
		int ct[26]={0};
		for(int i=0;s[i]!='\0';i++)ct[s[i]-'a']++;
		int ok=1;
		scanf("%s",s);
		int m;
		scanf("%d",&m);
		while(m--){
			char buf[50000];
			scanf("%s",buf);
			for(int i=0;buf[i]!=0;i++)ct[buf[i]-'a']--;
		}
		for(int i=0;i<26;i++)if(ct[i]!=0)ok=0;
		if(ok==0)printf("NO\n");
		else printf("YES\n");
	}
}		
