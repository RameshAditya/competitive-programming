#include<bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		char s[105];
		scanf("%s",s);
		int l=0;
		int d=0;
		int sym=0;
		for(int i=0;s[i]!='\0';++i){
			if(s[i]>='0' && s[i]<='9')d++;
			else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))l++;
			else if(s[i]=='@'||s[i]=='!'||s[i]=='?')sym++;
		}
		if(l==3)printf("The last character must be a letter.\n");
		else if(d==3)printf("The last character must be a digit.\n");
		else if(sym==1)printf("The last character must be a symbol.\n");
		else printf("The last character can be any type.\n");
	}
	return 0;
}

