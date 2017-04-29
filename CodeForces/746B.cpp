#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	char s[2005],ans[2005];
	scanf("%d%s",&n,s);
	int f=0;
	int r=n-1;
	int ok=1;
	for(int i=n-1;i>=0;i--){
		if(ok)
			ans[r--]=s[i];
		else
			ans[f++]=s[i];
		ok^=1;
	}
	for(int i=0;i<n;i++)printf("%c",ans[i]);
	return 0;
}
