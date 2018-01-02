#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,l,u;
	while(scanf("%d %d %d",&n,&l,&u)!=EOF){
		int nob=0;
		int cpy=n;
		while(cpy>>nob)nob++;	
		int res=0;
		for(int i=nob-1;i>=0;i--){
			if((n>>i)&1==0)res=res|(1<<i);
			else if(n|(res|(1<<i))>u);
		}
		printf("%d\n",res);
	}
}	
