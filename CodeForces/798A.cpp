#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[20];
	scanf("%s",s);
	int res=0;
	int i;
	for(i=0;s[i]!='\0';++i);
	int len=i;
	for(i=0;s[i]!='\0';++i)if(s[i]!=s[len-i-1])res++;
	(res==2||(res==0&&len&1))?printf("YES\n"):printf("NO\n");
	return 0;
}
