#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[105];
		scanf("%s",s);
		int ok=0;
		for(int i=0;s[i+3]!='\0';i++)if(s[i]==s[i+2] && s[i+1]==s[i+3])ok=1;
		if(ok)printf("YES\n");
		else printf("NO\n");
	}
}
