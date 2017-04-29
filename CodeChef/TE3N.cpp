#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	char s[100005];
	while(t--){
		int ptr=0;
		scanf("%d",s);
		int ok=1;
		for(int i=0;s[i]!='\0';++i){
			if(ptr<0)ok=0;
			if(s[i]=='I'||s[i]=='E')ptr++;
			if(s[i]=='M')
				{if(ptr>2 && s[ptr-1]=='E' && s[ptr]=='I')ptr-=2;
				else ok=0;}
		}
		(ok==1)?printf("Yes\n"):printf("No\n");
	}
	return 0;
}
