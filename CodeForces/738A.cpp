#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	char s[105];
	scanf("%s",s);
	int j;
	for(int i=0;i<n;i++){
		if(s[i]=='o' && i+1<n && s[i+1]=='g' && i+2<n && s[i+2]=='o'){
			printf("***");
			j=i+3;
			while(j<n&&s[j]=='g'&&j+1<n&&s[j+1]=='o')j+=2;
		i=j-1;
		}
		else printf("%c",s[i]);
	}
	return 0;
}
